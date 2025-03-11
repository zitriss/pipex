/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:22:00 by tlize             #+#    #+#             */
/*   Updated: 2024/11/12 13:38:42 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i ++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

// int main(void)
// {
//     char test1[6] = "Test 1";
//     char test2[50];
//     char test3[50];
//     ft_strlcpy(test2, test1, 6);
//     ft_strlcpy(test3, test1, 3);
//     printf("%s\n%s\n", test2, test3);
//     return (0);
// }
