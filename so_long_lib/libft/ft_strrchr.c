/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:23:55 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/26 16:44:02 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

//#include <stdio.h>

/*int	main(void)
{
	const char	*s;
	int			c;

	s = "HALHITA";
	c = 'H';
	printf("%ld\n", ft_strrchr(s, c) - s);
	return (0);
}
*/

/*int main()
{
	const char	*str;
	char		c;
	char		*result;

        str = "hola mund";
        c = '\0';
        result = ft_strrchr(str, c);
        if (result != NULL)
        {
                printf("El primer '%c' encontrado está en posición %s\n", c,
		result);
        }
        else
        {
                printf("No se encontró el carácter '%c'\n", c);
        }
        return (0);
}
*/
