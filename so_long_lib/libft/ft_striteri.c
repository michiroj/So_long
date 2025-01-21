/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:24:10 by mivelazc          #+#    #+#             */
/*   Updated: 2024/10/01 13:24:13 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*void	to_uppercase(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;

*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*int	main(void)
{
	char str[] = "hola mundo";
	printf("Cadena original: %s\n", str);
	ft_striteri(str, to_uppercase);
	printf("Cadena modificada: %s\n", str);
	return (0);
}
*/