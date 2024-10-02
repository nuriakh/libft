/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhmeto <nakhmeto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:02:14 by nakhmeto          #+#    #+#             */
/*   Updated: 2024/05/26 14:55:44 by nakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
// int	main()
// {
// 	int	result;
// 	int	c = 'o';
// 	result = ft_isascii(c);
// 	printf ("%d", result);
// 	return (0);
// }
