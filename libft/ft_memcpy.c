/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:06:44 by tlize             #+#    #+#             */
/*   Updated: 2024/11/19 17:07:09 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_char;
	char	*src_char;

	i = 0;
	dest_char = (char *)dest;
	src_char = (char *)src;
	if (!n || dest == src)
		return (dest);
	while (i < n)
	{
		dest_char[i] = src_char[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
//     char src[] = "Test 1";
//     char dest1[15];
//     char dest2[15];
//     ft_memcpy(dest1, src, strlen(src) + 1);
//     memcpy(dest2, src, strlen(src) + 1);
// 	assert (ft_strncmp(dest1, dest2, 15) == 0);
// 	printf("OK");
// 	return (0);
// }
