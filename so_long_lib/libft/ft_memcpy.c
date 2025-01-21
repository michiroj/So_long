/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:19:53 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/21 20:48:15 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	if (!dest && !src)
		return (dest);
	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char	src[10] = "chocolate";
	size_t	n;
	char	*dest;

	dest = ft_memcpy(dest, src, 1);
	printf("resultado: %s-------\n", dest);
}
*/