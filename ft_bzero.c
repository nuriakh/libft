/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhmeto <nakhmeto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:35:29 by nakhmeto          #+#    #+#             */
/*   Updated: 2024/07/02 18:58:21 by nakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*newpointer;

	i = 0;
	newpointer = (char *)s;
	while (i < n)
	{
		newpointer[i] = 0;
		i++;
	}
}

// int	main ()
// {
// 	char	array[] = "moloko";
// 	ft_bzero(array, 4);
// 	printf("%s", array);
// 	return (0);
// }
