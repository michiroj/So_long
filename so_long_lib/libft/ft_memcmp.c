/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:13:43 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/26 21:24:19 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main()
{
	char s1[6] = "applE";
	char s2[6] = "apple";
	int result = ft_memcmp(s1, s2, 6);

	if (result < 0)
	{
		printf("s1 es menor que s2\n");
	}
	else if (result > 0)
	{
		printf("s1 es mayor que s2\n");
	}
	else
	{
		printf("s1 es igual que s2\n");
	}
	return (0);
}*/