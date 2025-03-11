/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:47:15 by tlize             #+#    #+#             */
/*   Updated: 2024/11/12 14:56:54 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*s_char;
	size_t		i;

	i = 0;
	s_char = (char *)s;
	while (i < n)
	{
		if ((unsigned char)s_char[i] == (unsigned char)c)
			return ((char *)s + i);
		i ++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char arr[] = "Hello, World!";
// 	char search = 'o';
// 	char *result;

// 	result = (char *)ft_memchr(arr, search, ft_strlen(arr));

// 	if (result != NULL)
// 		printf("Caractère '%c' trouvé à l'adresse : %p\n", search, result);
// 	else
// 		printf("Caractère '%c' non trouvé.\n", search);

// 	return (0);
// }
