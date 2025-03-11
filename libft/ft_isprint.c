/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:36:58 by tlize             #+#    #+#             */
/*   Updated: 2024/11/05 14:20:07 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	return (16384);
}

// int	main(void)
// {
// 	assert(ft_isprint('A') == isprint('A'));
// 	assert(ft_isprint('5') == isprint('5'));
// 	assert(ft_isprint(127) == isprint(127));
// 	printf("OK");
// 	return (0);
// }