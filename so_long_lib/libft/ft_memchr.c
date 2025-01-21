/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:32:42 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/26 20:21:52 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	character;
	size_t			i;

	p = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*p == character)
			return (p);
		i++;
		p++;
	}
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	char	buffer[12] = "Hola, mundo";
	char	*ptr;


	// Llamamos a nuestra implementación de memchr para buscar 'm'
	ptr = ft_memchr(buffer, 'm', sizeof(buffer));
	if (ptr != NULL)
	{
		printf("El carácter 'm' se encontró en la posición: %ld\n", ptr
				- buffer);
	}
	else
	{
		printf("El carácter 'm' no se encontró.\n");
	}
	return (0);
}*/
