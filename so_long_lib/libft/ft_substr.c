/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:12:59 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/27 20:37:52 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s;
	int		start;
	size_t	len;
	char	*t;

	s = "Chocolate";
	start = 5;
	len = 8;
	t = ft_substr(s, start, len);
	printf("Trozo de la cadena: %s\n", t);
}
*/