/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:56:51 by tlize             #+#    #+#             */
/*   Updated: 2024/11/19 17:07:11 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_char;
	char	*src_char;

	if (!dest && !src)
		return (NULL);
	dest_char = (char *)dest;
	src_char = (char *)src;
	if (dest_char > src_char)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dest_char[i] = src_char[i];
		}
	}
	else
	{
		i = -1;
		while (++i < n)
			dest_char[i] = src_char[i];
	}
	return (dest);
}

// int main(void)
// {
//     char src[] = "Test 1";
//     char dest1[15];
//     char dest2[15];
//     ft_memmove(dest1, src, strlen(src) + 1);
//     memmove(dest2, src, strlen(src) + 1);
// 	assert (ft_strncmp(dest1, dest2, 15) == 0);
// 	printf("OK");
// 	return (0);
// }
