/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 14:06:22 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/28 14:06:25 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	f;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	f = ft_strlen(s1);
	while (f > i && ft_strchr(set, s1[f - 1]))
		f--;
	len = f - i;
	return (ft_substr(s1, i, len));
}

/*#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*set;
	char	*ts;

	s1 = "askasEl chocolate 44";
	set = "askas44";
	ts = ft_strtrim(s1, set);
	printf("El resultado de corte es: %s\n", ts);
	free(ts);
	return (0);
}
*/