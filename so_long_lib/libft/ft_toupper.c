/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:27:42 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/26 13:41:27 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 97 + 65);
	}
	return (c);
}

/*#include <stdio.h>

int	main(void)
{
	char	minus;
	char	mayus;

	minus = 'a';
	mayus = ft_toupper(minus);
	
	printf("Caracter original: %c\n", minus);
	printf("Caracter mayus: %c\n", mayus);
	return (0);
}
*/
