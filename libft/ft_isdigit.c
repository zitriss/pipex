/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:17:20 by tlize             #+#    #+#             */
/*   Updated: 2024/11/05 17:56:17 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int	ft_isdigit(int c)
{
	if (c > 57 || c < 48)
		return (0);
	return (2048);
}

// int	main(void)
// {
// 	assert(ft_isdigit('1') == isdigit('1'));
// 	assert(ft_isdigit('B') == isdigit('B'));
// 	assert(ft_isdigit('#') == isdigit('#'));
// 	printf("OK");
// 	return (0);
// }
