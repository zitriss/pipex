/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:16:41 by tlize             #+#    #+#             */
/*   Updated: 2025/03/24 15:11:58 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static char	**split_paths(char **envp)
{
	int		i;
	char	**paths;

	i = 0;
	while (envp[i++])
	{
		if (ft_strncmp(envp, "PATH=", 5) == 0)
			paths = ft_split(envp[i] + 5, ':');
	}
	return (paths);
}

static char	*get_path(char *cmd, char **envp)
{
	char	**paths;
	char	*path;
	int		i;

	paths = get_split_paths(envp);
	i = 0;
	while (paths[i++])
	{
		path = ft_strjoin(paths[i], cmd);
		if (access(path, F_OK) == 0)
			return (path);
		free(path);
	}
	i = 0;
	while (paths[i++])
		free(paths[i]);
	free(paths);
	return (0);
}

void	exec_pipe(char *argv, char **envp)
{
	char	**cmd;
	char	*path;
	int		i;

	i = 0;
	cmd = ft_split(argv, ' ');
	path = get_path(cmd[0], envp);
	if (!path)
	{
		while (cmd[i++])
			free(cmd[i]);
		free(cmd);
		print_error("Erreur avant l'execution d'une commande.");
	}
	if (execve(path, cmd, envp) == -1)
		print_error("Erreur pendant l'execution d'une commande.");
}
