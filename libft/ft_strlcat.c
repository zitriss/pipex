/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:31:04 by tlize             #+#    #+#             */
/*   Updated: 2024/11/13 16:49:56 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	j = dest_len;
	while (src[i] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	if (j < size)
		dest[j] = '\0';
	return (dest_len + src_len);
}

// int main(void)
// {
//     char test1[50] = "Test 1";
//     char test2[6] = "Test 2";
//     ft_strlcat(test1, test2, 13);
//     printf("%s\n", test1);
//     return (0);
// }
