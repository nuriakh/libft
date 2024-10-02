/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhmeto <nakhmeto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:57:02 by nakhmeto          #+#    #+#             */
/*   Updated: 2024/07/04 16:12:40 by nakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

//i = needle
// j = haystack
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	n = 0;
	if (needle[0] == 0)
		return ((char *) haystack);
	while (haystack[h] && h < len)
	{
		while (haystack[h + n] == needle[n] && haystack[h + n] && h + n < len)
		{
			n++;
			if (needle[n] == 0)
				return ((char *) haystack + h);
		}
		h++;
		n = 0;
	}
	return (0);
}
// int main()
// {
// 	char    n[] = "k";
// 	char    h[] = "premoloko";

// 	char *result = ft_strnstr(h, n, 9);
// 	printf("%s\n", result);
// 	return (0);
// }
