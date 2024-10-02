/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhmeto <nakhmeto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 18:23:52 by nakhmeto          #+#    #+#             */
/*   Updated: 2024/07/04 18:27:01 by nakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*newpointer1;
	char	*newpointer2;

	i = 0;
	newpointer1 = (char *)src;
	newpointer2 = (char *)dest;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		newpointer2[i] = newpointer1[i];
		i++;
	}
	return (dest);
}
// int	main ()
// {
// 	char	src[] = "moloko";
// 	char	dest[10];

// 	char	*result;

// 	result = ft_memcpy(dest, src, 6);
// 	printf("%s", result);
// 	return (0);
// }
