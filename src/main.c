/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:44:58 by tlize             #+#    #+#             */
/*   Updated: 2025/03/11 17:58:31 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int check_ac(int ac)
{
    if (ac != 5)
        error_msg("4 arguments sont necessaires.");
}

int main(int ac, char **av, char **envp)
{
    int pipe1[2];
    int pipe2[2];
    int i;

    check_ac(ac);
    pipe(pipe1);
    pipe(pipe2);
}