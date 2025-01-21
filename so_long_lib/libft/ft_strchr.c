/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:44:27 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/26 15:51:16 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	const char	*str;
	char		b;
	char		*result;

	str = "hola mundo";
	b = 'o';
	result = ft_strchr(str, b);
	if (result != NULL)
	{
        	printf("El primer '%c' encontrado está en posición %ld\n", b, result
			- str);
			printf("La cadena empieza y termina en %s", result);
       	}
	else
	{
        	printf("No se encontró el carácter '%c'\n", b);
	}
	return (0);
}
*/
