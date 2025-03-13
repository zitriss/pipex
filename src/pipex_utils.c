/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:16:41 by tlize             #+#    #+#             */
/*   Updated: 2025/03/13 17:14:49 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char    **get_path(char **envp)
{
    int     i;
    char    **path;
    i = 0;
    while(envp[i++])
    {
        if(ft_strncmp(envp,"PATH=",5) == 0)
            path = ft_split(envp[i] + 5, ':');
    }
    return (path);
}

