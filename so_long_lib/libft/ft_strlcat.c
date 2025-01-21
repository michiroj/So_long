/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:10:08 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/24 19:35:34 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	d_len;
	size_t	s_len;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dest);
	if (dsize <= d_len)
		return (dsize + s_len);
	else
	{
		dest += d_len;
		dsize -= d_len;
		while (--dsize && *src)
			*dest++ = *src++;
		*dest = '\0';
		return (d_len + s_len);
	}
}

/*#include <stdio.h>
int	main(void)
{
	char dest[20] = "hola, ";
	char src[] = "mundo!";
	printf("Antes de strlcat: %s\n", dest);
	ft_strlcat(dest, src, sizeof(dest));
	printf("Después de strlcat: %s\n", dest);
	return (0);
}*/
