/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:03:21 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/17 15:24:58 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isascii('t'));
	printf("%d\n", ft_isascii('7'));
	printf("%d\n", ft_isascii('#'));
}
*/