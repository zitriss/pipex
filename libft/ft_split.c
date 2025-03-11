/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:44:49 by tlize             #+#    #+#             */
/*   Updated: 2024/11/13 16:50:05 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	find_str(char const *s, char c)
{
	int	i;
	int	nb_str;

	i = 0;
	nb_str = 0;
	if (!s[0])
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			nb_str++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		nb_str++;
	return (nb_str);
}

static void	get_next_str(char **next_str, size_t *next_strlen, char c)
{
	size_t	i;

	*next_str += *next_strlen;
	*next_strlen = 0;
	i = 0;
	while (**next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return ;
		(*next_strlen)++;
		i++;
	}
}

static char	**malloc_err(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*next_str;
	size_t	next_strlen;
	int		i;

	i = -1;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (find_str(s, c) + 1));
	if (!tab)
		return (NULL);
	next_str = (char *)s;
	next_strlen = 0;
	while (++i < find_str(s, c))
	{
		get_next_str(&next_str, &next_strlen, c);
		tab[i] = (char *)malloc(sizeof(char) * (next_strlen + 1));
		if (!tab[i])
			return (malloc_err(tab));
		ft_strlcpy(tab[i], next_str, next_strlen + 1);
	}
	tab[i] = NULL;
	return (tab);
}

// int	main(void)
// {
// 	char	**result;
// 	char	*test1 = "Test 1 Test 2";
// 	char	test2 = ' ';
// 	int		i = 0;

// 	result = ft_split(test1, test2);
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (result[i])
// 	{
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
