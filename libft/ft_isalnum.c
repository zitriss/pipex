/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:27:26 by tlize             #+#    #+#             */
/*   Updated: 2024/11/05 17:36:18 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <assert.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (8);
	return (0);
}

// int	main(void)
// {
// 	assert(ft_isalnum('A') == isalnum('A'));
// 	assert(ft_isalnum('5') == isalnum('5'));
// 	assert(ft_isalnum('#') == isalnum('#'));
// 	printf("OK");
// 	return (0);
// }
