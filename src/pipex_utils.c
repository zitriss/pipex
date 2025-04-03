/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:16:41 by tlize             #+#    #+#             */
/*   Updated: 2025/04/03 18:42:55 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

static int	envpoupas(char *cmd, char **envp)
{
	if (access(cmd, F_OK) == 0)
		return (0);
	else if (!envp[0])
		print_error("Pas d'envp\n");
	return (1);
}

static char	*get_path(char *cmd, char **envp, int i)
{
	char	**paths;
	char	*path;
	char	*path_temp;

	if (!envpoupas(cmd, envp))
		return (cmd);
	while (ft_strnstr(envp[i], "PATH=", 5) == 0)
		i++;
	paths = ft_split(envp[i] + 5, ':');
	i = -1;
	while (paths[++i])
	{
		path_temp = ft_strjoin(paths[i], "/");
		path = ft_strjoin(path_temp, cmd);
		free(path_temp);
		if (access(path, F_OK) == 0)
			return (path);
		free(path);
	}
	i = -1;
	while (paths[++i])
		free(paths[i]);
	free(paths);
	free(cmd);
	return (0);
}

void	exec_pipe(char *argv, char **envp)
{
	char	**cmd;
	char	*path;
	int		i;

	i = 0;
	cmd = ft_split(argv, ' ');
	path = get_path(cmd[0], envp, i);
	if (!path)
	{
		while (cmd[i ++])
			free(cmd[i]);
		free(cmd);
		free(path);
		print_error("Erreur avant l'execution d'une commande.\n");
	}
	if (execve(path, cmd, envp) == -1)
		print_error("Erreur pendant l'execution d'une commande.\n");
}
