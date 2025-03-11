/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:26:36 by tlize             #+#    #+#             */
/*   Updated: 2024/10/31 11:42:33 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*s_char;

	s_char = (char *)s;
	while (n > 0)
	{
		s_char[n - 1] = c;
		n--;
	}
	return (s);
}

// int    main(void)
// {
//     char str1[7] = "Test 1";
// 	char str2[7] = "Test 1";
//     ft_memset(str1, 'A', 3);
// 	memset(str2, 'A', 3);
// 	printf("%s, %s\n", str1, str2);
// 	ft_memset(str1, 'B', 4);
// 	memset(str2, 'B', 4);
// 	printf("%s, %s\n", str1, str2);
// 	ft_memset(str1, ' ', 6);
// 	memset(str2, ' ', 6);
// 	printf("%s, %s\n", str1, str2);
//     return (0);
// }