/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:44:58 by tlize             #+#    #+#             */
/*   Updated: 2025/03/25 15:06:13 by tlize            ###   ########.fr       */
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
	exec_pipe(argv[2], envp);
}

static void	parent(char **argv, char **envp, int *fd)
{
	int	fileout;

	fileout = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (fileout == -1)
		print_error("Erreur lors de l'ouverture du fichier de sortie.");
	dup2(fd[0], STDIN_FILENO);
	ft_putstr_fd("test1\n", 1);
	printf("%d\n", fileout);
	dup2(fileout, STDOUT_FILENO);
	ft_putstr_fd("test2\n", 1);
	close(fd[1]);
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
