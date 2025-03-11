/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:22:25 by tlize             #+#    #+#             */
/*   Updated: 2024/11/12 15:25:34 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int	ft_atoi(const char *nptr)
{
	long			total;
	long			sign;
	unsigned int	i;

	total = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i ++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		total = total * 10 + nptr[i] - '0';
		i ++;
	}
	return ((int)(total * sign));
}

// int	main(void)
// {
// 	assert(ft_atoi("123456") == atoi("123456"));
// 	assert(ft_atoi("-123456") == atoi("-123456"));
// 	assert(ft_atoi("0") == atoi("0"));
// 	printf("OK");
// 	return (0);
// }
