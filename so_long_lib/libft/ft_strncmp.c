/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:02:44 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/26 17:31:44 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' && s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		if (s1[i])
			return (1);
		else if (s2[i])
			return (-1);
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	int		result;

	str1 = "abcdeFg";
	str2 = "abcdef";
	result = ft_strncmp(str1, str2, 6);
	if (result < 0)
	{
		printf("str1 es menor que str2\n");
	}
	else if (result > 0)
	{
		printf("str1 es mayor que str2\n");
	}
	else
	{
		printf("str1 es igual que str2\n");
	}
	return (0);
}
*/