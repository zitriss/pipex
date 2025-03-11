/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:05:56 by tlize             #+#    #+#             */
/*   Updated: 2024/11/13 16:30:34 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}

// int	main(void)
// {
//     printf("%d\n", ft_isascii('%'));
//     return(0);
// }
