/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:44:58 by tlize             #+#    #+#             */
/*   Updated: 2025/03/13 17:24:46 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static void exec_pipe(char *argv, char **envp)
{

}

static void child(char **argv, char **envp, int *fd)
{
    int filein;

    filein = open(argv[1], O_RDONLY, 0777);
    if (filein == -1)
        print_error("Erreur lors de la lecture du fichier d'entree.");
    dup2(fd[1], STDOUT_FILENO);
    dup2(filein, STDIN_FILENO);
    close(fd[0]);
    exec_pipe(argv[2], envp);
}

static void parent()
{

}

void    main(int argc, char **argv, char **envp)
{
    int fd[2];
    pid_t id;

    check_argc(argc);
    if (pipe(fd) == -1)
        print_error("Erreur lors de la creation de la Pipe");
    id = fork();
    if (id == -1)
        print_error("Erreur lors de la creation du Fork");
    if (id == 0)
        child(argv, envp, fd);
    
}