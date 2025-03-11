/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:55:23 by tlize             #+#    #+#             */
/*   Updated: 2024/11/19 17:16:11 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if ((char)c == '\0')
		return ((char *)s + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i ++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%s\n",ft_strchr("Allo Bassem ?", 'o'));
// 	printf("%s\n",strchr("Allo Bassem ?", 'o'));
// 	return (0);
// }
