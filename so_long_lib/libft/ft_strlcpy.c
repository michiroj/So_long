/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:29:10 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/24 17:09:25 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	cont;

	cont = 0;
	if (size != 0)
	{
		while (cont < size - 1 && src[cont])
		{
			dst[cont] = src[cont];
			cont++;
		}
		dst[cont] = '\0';
	}
	while (src[cont])
		cont++;
	return (cont);
}
