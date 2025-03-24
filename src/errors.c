/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:53:43 by tlize             #+#    #+#             */
/*   Updated: 2025/03/24 15:03:18 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

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
