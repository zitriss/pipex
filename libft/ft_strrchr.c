/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:48:38 by tlize             #+#    #+#             */
/*   Updated: 2024/11/19 17:16:33 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i ++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i --;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strrchr("Allo Allo Bassem ?",'o'));
// 	printf("%s\n", strrchr("Allo Allo Bassem ?", 'o'));
// 	return (0);
// }
