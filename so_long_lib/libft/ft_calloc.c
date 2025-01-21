/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:46:04 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/27 14:48:36 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	ptr = malloc(size * n);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, (n * size));
	return (ptr);
}

/*#include <stdio.h>

int	main(void)
{
	size_t	n;
	char	*result;
	size_t	len;

	n = 10;
	result = ft_calloc(n, sizeof(char));
	len = 0;
	while (len < n)
	{
		if (result[len] != 0)
		{
			printf("error");
			return (0);
		}
		len++;
	}
	printf("right\n");
	return (0);
}
*/