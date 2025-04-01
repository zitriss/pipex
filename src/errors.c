/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:53:43 by tlize             #+#    #+#             */
/*   Updated: 2025/04/01 16:38:04 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	print_error(char *s)
{
	ft_putstr_fd(s, STDERR_FILENO);
	exit(EXIT_FAILURE);
}

void	check_argc(int argc)
{
	if (argc != 5)
		print_error("Mauvais nombre d'arguments.");
}

void	check_env(char **envp)
{
	if (!envp[0])
		print_error("Pas d'envp");
}

void	check_comm(char *argv)
{
	size_t	len;
	size_t	i;
	int		vide;

	i = 0;
	vide = 1;
	len = ft_strlen(argv);
	if (len == 0)
		print_error("Commande vide");
	while (i < len)
	{
		if (argv[i] != ' ')
			vide = 0;
		i ++;
	}
	if (vide)
		print_error("Commande vide");
}
