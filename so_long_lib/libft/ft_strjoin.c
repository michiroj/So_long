/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:41:22 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/28 12:41:25 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	int		j;
	char	*ts;

	len = ft_strlen(s1) + ft_strlen(s2);
	ts = (char *)malloc((len + 1) * sizeof(char));
	if (ts == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		ts[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ts[i] = s2[j];
		i++;
		j++;
	}
	ts[i] = '\0';
	return (ts);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*ts;

	s1 = "El chocolate";
	s2 = " es rico";
	ts = ft_strjoin(s1, s2);
	printf("Resultado de las dos cadenas: %s\n", ts);
	return (0);
}
*/