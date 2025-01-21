/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:13:47 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/24 09:56:28 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	char				*buffer;

	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	if (d == s || d + n <= s || s + n <= d)
	{
		ft_memcpy(d, s, n);
	}
	else
	{
		buffer = (char *)malloc(n);
		if (buffer == NULL)
			return (NULL);
		ft_memcpy(buffer, s, n);
		ft_memcpy(d, buffer, n);
		free(buffer);
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
    char data[20] = "HelloWorld12345";
    printf("Antes de memmove: %s\n", data);

    ft_memmove(data + 5, data, 5);
    printf("Después de memmove: %s\n", data);

    return (0);
}*/