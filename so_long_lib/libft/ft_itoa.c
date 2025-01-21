/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:25:59 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/30 15:26:06 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		ncpy;
	int		i;
	char	*str;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	ncpy = n;
	if (n < 0)
		ncpy = -n;
	i = num_len(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	if (ncpy == 0)
		str[i] = '0';
	while (ncpy > 0)
	{
		str[i--] = (ncpy % 10) + '0'; 
		ncpy /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

#include <stdio.h>

int	main(void)
{
	int		n;
	char	*str;

	n = 50;
	str = ft_itoa(n);
	printf("Número: %s\n", str);
	// Liberamos la memoria asignada con malloc
	free(str);
	return (0);
}
