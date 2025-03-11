/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:29:12 by tlize             #+#    #+#             */
/*   Updated: 2024/11/09 16:13:19 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] && (s1[i] == s2[i]))
		i ++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	char test1[6] = "Test 1";
// 	char test2[6] = "Test 1";
// 	assert(ft_strncmp(test1, test2, 6) 
// 	== strncmp(test1, test2, 6));
// 	test2[5] = 2;
// 	assert(ft_strncmp(test1, test2, 6) 
// 	== strncmp(test1, test2, 6));
// 	assert(ft_strncmp(test1, test2, 65) 
// 	== strncmp(test1, test2, 65));
// 	printf("OK");
// 	return (0);
// }