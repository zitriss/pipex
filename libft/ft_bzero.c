/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:14:48 by tlize             #+#    #+#             */
/*   Updated: 2024/11/04 13:01:33 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int    main(void)
// {
//     char str1[7] = "Test 1";
// 	char str2[7] = "Test 1";
//     ft_bzero(str1, 5);
// 	bzero(str2, 5);
// 	printf("%s, %s\n", str1, str2);
//     return (0);
// }