/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:19:07 by tlize             #+#    #+#             */
/*   Updated: 2024/11/13 16:41:10 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i ++;
	}
	return (i);
}

// int	main(void)
// {
// 	ft_putstr_fd("Test 1", 1);
// 	ft_putstr_fd("Test 2 !", 1);
// 	ft_putstr_fd("Test 3 333 444 @$", 1);
// 	return (0);
// }
