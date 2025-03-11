/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:01:56 by tlize             #+#    #+#             */
/*   Updated: 2024/11/19 17:07:27 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i ++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j ++;
	}
	str[i + j] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char *test1 = "Test 1 ";
// 	char *test2 = "Test 2";
// 	char *test3 = ft_strjoin(test1, test2);
// 	printf("%s\n", test3);
// 	return (0);
// }
