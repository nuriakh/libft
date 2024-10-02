/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakhmeto <nakhmeto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 21:00:25 by nakhmeto          #+#    #+#             */
/*   Updated: 2024/06/23 21:20:55 by nakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
// int main() {
//     const char *str = "Hello, world!";
//     char *result = ft_strrchr(str, 'l');

//     if (result != NULL) {
//         printf(" %s\n", result);
//     } else {
//         printf("huinya\n");
//     }

//     return 0;
// }
