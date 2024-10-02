/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhmeto <nakhmeto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 14:58:45 by nakhmeto          #+#    #+#             */
/*   Updated: 2024/05/26 16:54:05 by nakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*newpointer;

	i = 0;
	newpointer = (char *)s;
	while (i != n)
	{
		newpointer[i] = c;
		i++;
	}
	return (s);
}
// int	main ()
// {
// 	char	array[] = "moloko";
// 	char	*result;

// 	result = ft_memset(array, 50, 4);
// 	printf("%s", result);
// 	return (0);
// }
