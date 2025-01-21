/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:45:17 by mivelazc          #+#    #+#             */
/*   Updated: 2024/10/01 09:45:20 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	size_t			len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>

char	test_function(unsigned int i, char c)
{
	i = 0;
	while (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main(void)
{
	const char	*str;
	char		*result;

	str = "holitas";
	result = ft_strmapi(str, test_function);
	printf("%s\n", result);
	return (0);
}
*/