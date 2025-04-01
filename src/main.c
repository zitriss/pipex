/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:44:58 by tlize             #+#    #+#             */
/*   Updated: 2025/04/01 18:46:54 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"
#include <stdio.h>

static void	child(char **argv, char **envp, int *fd)
{
	int	filein;

	filein = open(argv[1], O_RDONLY, 0777);
	if (filein == -1)
	{
		close(fd[0]);
		close(fd[1]);
		print_error("Erreur lors de l'ouverture du fichier d'entree.");
	}
	dup2(fd[1], STDOUT_FILENO);
	dup2(filein, STDIN_FILENO);
	close(fd[0]);
	close(fd[1]);
	close(filein);
	exec_pipe(argv[2], envp);
}

static void	parent(char **argv, char **envp, int *fd)
{
	int	fileout;

	fileout = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (fileout == -1)
	{
		close(fd[0]);
		close(fd[1]);
		print_error("Erreur lors de l'ouverture du fichier de sortie.");
	}
	dup2(fd[0], STDIN_FILENO);
	dup2(fileout, STDOUT_FILENO);
	close(fd[0]);
	close(fd[1]);
	close(fileout);
	exec_pipe(argv[3], envp);
}

int	main(int argc, char **argv, char **envp)
{
	int		fd[2];
	pid_t	unoid;
	pid_t	dosid;

	check_all(argc, argv, envp);
	if (pipe(fd) == -1)
		print_error("Erreur lors de la creation de la Pipe");
	unoid = fork();
	if (unoid == -1)
		print_error("Erreur lors de la creation du Fork");
	if (unoid == 0)
		child(argv, envp, fd);
	dosid = fork();
	if (dosid == -1)
		print_error("Erreur lors de la creation du Fork");
	if (dosid == 0)
		parent(argv, envp, fd);
	close(fd[0]);
	close(fd[1]);
	waitpid(unoid, NULL, 0);
	waitpid(dosid, NULL, 0);
	return (0);
}
