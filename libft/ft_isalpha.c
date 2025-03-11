/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:51:44 by tlize             #+#    #+#             */
/*   Updated: 2024/11/05 17:54:30 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int	ft_isalpha(int c)
{
	if (c < 65 || c > 122 || (c > 90 && c < 97))
		return (0);
	return (1024);
}

// int	main(void)
// {
// 	assert(ft_isalpha('A') == isalpha('A'));
// 	assert(ft_isalpha('5') == isalpha('5'));
// 	assert(ft_isalpha('#') == isalpha('#'));
// 	printf("OK");
// 	return (0);
// }
