/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:57:51 by tlize             #+#    #+#             */
/*   Updated: 2024/11/19 17:07:18 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	ft_strcopy(char *str, char *copy)
{
	int	i;

	i = 0;
	while (str[i])
	{
		copy[i] = str[i];
		i ++;
	}
	copy[i] = '\0';
}

char	*ft_strdup(const char *s)
{
	char	*copy;
	char	*str;

	str = (char *)s;
	copy = (char *) malloc((ft_strlen(str) + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	ft_strcopy(str, copy);
	return (copy);
}

// int	main(void)
// {
// 	char	*chaine = "Test 1";
// 	printf("%s\n", ft_strdup(chaine));
// 	return (0);
// }
