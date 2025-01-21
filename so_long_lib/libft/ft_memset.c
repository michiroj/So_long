/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:29:51 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/21 16:49:14 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (n--)
		*p++ = (unsigned char)c;
	return (b);
}

/*#include <stdio.h>
int	main(void)
{
	unsigned char b[10] = "abcdefgh";
	printf("Resultado: %s\n", (char *)ft_memset(b, '0', 0));
	return(0);
}*/