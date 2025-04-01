/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:53:43 by tlize             #+#    #+#             */
/*   Updated: 2025/04/01 18:33:00 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	print_error(char *s)
{
	ft_putstr_fd(s, STDERR_FILENO);
	exit(EXIT_FAILURE);
}

static void	check_argc(int argc)
{
	if (argc != 5)
		print_error("Mauvais nombre d'arguments.");
}

static void	check_envp(char **envp)
{
	if (!envp[0])
		print_error("Pas d'envp");
}

static void	check_comm(char *argv)
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

void	check_all(int argc, char **argv, char **envp)
{
	check_argc(argc);
	check_envp(envp);
	check_comm(argv[2]);
	check_comm(argv[3]);
}
