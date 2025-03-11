/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:06:39 by tlize             #+#    #+#             */
/*   Updated: 2024/10/21 17:27:49 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <assert.h>

int	ft_toupper(int c)
{
	if (96 < c && c < 123)
		return (c - 32);
	return (c);
}

// int	main(void)
// {
// 	assert(ft_toupper('a') == toupper('a'));
// 	assert(ft_toupper('B') == toupper('B'));
// 	assert(ft_toupper('5') == toupper('5'));
// 	printf("OK");
// 	return (0);
// }