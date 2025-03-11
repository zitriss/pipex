/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:28:44 by tlize             #+#    #+#             */
/*   Updated: 2024/11/08 16:29:13 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <assert.h>

int	ft_tolower(int c)
{
	if (64 < c && c < 91)
		return (c + 32);
	return (c);
}

// int	main(void)
// {
// 	assert(ft_tolower('a') == tolower('a'));
// 	assert(ft_tolower('B') == tolower('B'));
// 	assert(ft_tolower('5') == tolower('5'));
// 	printf("OK");
// 	return (0);
// }