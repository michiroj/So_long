/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:27:16 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/28 16:27:22 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s != '\0' && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static int	countword(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			count++;
			s += wordlen(s, c);
		}
		else
		{
			s++;
		}
	}
	return (count);
}

static void	*free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
		free(str[i++]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**ts;

	if (!s)
		return (NULL);
	count = countword(s, c);
	ts = malloc((count + 1) * sizeof(char *));
	if (!ts)
		return (NULL);
	ts[count] = NULL;
	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			ts[i] = ft_substr(s, 0, wordlen(s, c));
			if (!ts[i++])
				return (free_str(ts));
			s += wordlen(s, c);
		}
		else
			s++;
	}
	return (ts);
}

/*#include <stdio.h>

int	main(void)
{
	const char *test = " Razer,,,,,,, kraken, kitty";
	char separator = ',';

	char **result = ft_split(test, separator);

	int i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		result[i] = NULL;
		i++;
	}
	free_str(result);

	return (0);
}
*/