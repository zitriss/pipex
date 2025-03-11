/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:25:52 by tlize             #+#    #+#             */
/*   Updated: 2024/11/20 15:08:09 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_inlst(char s, const char *set)
{
	while (*set)
	{
		if (s == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*s_char;
	char	*end;
	char	*ret;

	if (!s1 || !set)
		return (0);
	s_char = (char *)s1;
	end = s_char + ft_strlen(s1);
	while (*s_char && ft_inlst(*s_char, set))
		++s_char;
	while (s_char < end && ft_inlst(*(end - 1), set))
		--end;
	ret = ft_substr(s_char, 0, end - s_char);
	return (ret);
}

// int	main(void)
// {
// 	const char	*test1 = "!!!Hello ! World!!!";
// 	const char	*test2 = "!";
// 	char		*resultat = ft_strtrim(test1, test2);

// 	printf("original: '%s', Trimme: '%s'\n", test1, resultat);
// 	free(resultat);
// 	return (0);
// }
