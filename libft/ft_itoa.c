/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:30:18 by tlize             #+#    #+#             */
/*   Updated: 2024/11/20 14:43:38 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	get_num_length(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len ++;
	}
	while (n > 0)
	{
		n /= 10;
		len ++;
	}
	return (len);
}

static char	*hawktoa(char *str, int n, int len, unsigned int num)
{
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	while (num >= 10)
	{
		str[-- len] = num % 10 + '0';
		num /= 10;
	}
	str[-- len] = num + '0';
	return (str);
}

static char	*skibiditoa(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 12);
	if (!str)
		return (NULL);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*str;

	if (n == -2147483648)
		return (skibiditoa());
	len = get_num_length(n);
	if (len == 0)
		len = 1;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	hawktoa(str, n, len, 0);
	return (str);
}

// int	main(void)
// {
// 	int		num;
// 	char	*str;

// 	num = -2147483648;
// 	str = ft_itoa(num);
// 	printf("%s\n", str);
// 	return (0);
// }
