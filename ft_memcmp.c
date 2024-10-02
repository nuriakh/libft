/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhmeto <nakhmeto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:55:24 by nakhmeto          #+#    #+#             */
/*   Updated: 2024/07/02 17:04:22 by nakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*p1;
	char	*p2;

	i = 0;
	p1 = (char *)s1;
	p2 = (char *)s2;
	while (i < n)
	{
		if (p2[i] != p1[i])
		{
			return ((unsigned char)(p1[i]) - (unsigned char)(p2[i]));
		}
		i++;
	}
	return (0);
}
// int main ()
// {
// 	char    s1[] = "moloko";
// 	char    s2[] = "mopoko";

// 	int result = ft_memcmp(s1, s2, 5);
// 	printf("%d", result);
// 	return (0);
// }
