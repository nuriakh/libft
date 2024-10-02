/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhmeto <nakhmeto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:02:13 by nakhmeto          #+#    #+#             */
/*   Updated: 2024/07/02 18:50:35 by nakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				z;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	z = 0;
	if (d < s)
	{
		while (z < n)
		{
			d[z] = s[z];
			z++;
		}
	}
	z = n;
	if (d > s)
	{
		while (z > 0)
		{
			d [z - 1] = s [z - 1];
			z--;
		}
	}
	return (dest);
}
// int main()
// {
// 	char src[] = "moloko";
// 	char dest[20];

// 	ft_memmove(dest, src, 47);
// 	printf("dest: %s\n", dest);
// 	return 0;
// }
