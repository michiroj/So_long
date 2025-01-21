/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:41:41 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/26 13:46:44 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + (97 - 65));
	}
	return (c);
}

/*#include <stdio.h>

int	main(void)
{
	char	mayus;
	char	minus;

	mayus = 'A';
	minus = ft_tolower(mayus);
	printf("Caracter original: %c\n", mayus);
	printf("Caracter mayus: %c\n", minus);
	return (0);
}
*/