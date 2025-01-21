/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:40:59 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/27 11:41:02 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
	{
		nptr++;
	}
	if (*nptr == '-' || *nptr == '+')
	{
		sign = 44 - *nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		value = value * 10 + (*nptr++ - 48);
	}
	return (sign * value);
}

//el 44 corresponde al caracter ','
//el 48 corresponde al caracter '0'
/*#include <stdio.h>

int	main(void)
{
	char	nptr[100];
	int		result;

	printf("Ingresa un número: %d\n", ft_atoi("2147483649"));
	
	result = ft_atoi(nptr);
	printf("El número convertido es: %d\n", result);
	return (0);
}*/
