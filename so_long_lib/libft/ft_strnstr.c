/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:41:12 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/27 10:41:16 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	big_len;

	if (!*little)
		return ((char *)big);
	if (len == '\0')
		return (NULL);
	little_len = ft_strlen(little);
	big_len = ft_strlen(big);
	if (len > big_len)
		len = big_len;
	while (len >= little_len)
	{
		if (ft_strncmp(big, little, little_len) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	const char	*big;
	const char	*little;
	char		*result;
	size_t		len;

	big = "Hola, mundo!";
	little = "mundo";
	len = 12;
	result = ft_strnstr(big, little, len);
	if (result)
	{
		printf("Subcadena encontrada: \"%s\"\n", result);
	}
	else
	{
		printf("Subcadena no encontrada.\n");
	}
	return (0);
}
*/