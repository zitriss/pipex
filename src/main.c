/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:44:58 by tlize             #+#    #+#             */
/*   Updated: 2025/04/01 15:25:19 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"
#include <stdio.h>

static void	child(char **argv, char **envp, int *fd)
{
	int	filein;

	filein = open(argv[1], O_RDONLY, 0777);
	if (filein == -1)
		print_error("Erreur lors de l'ouverture du fichier d'entree.");
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
		print_error("Erreur lors de l'ouverture du fichier de sortie.");
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
	pid_t	id;

	check_argc(argc);
	if (pipe(fd) == -1)
		print_error("Erreur lors de la creation de la Pipe");
	id = fork();
	if (id == -1)
		print_error("Erreur lors de la creation du Fork");
	if (id == 0)
		child(argv, envp, fd);
	waitpid(id, NULL, 0);
	parent(argv, envp, fd);
	return (0);
}
