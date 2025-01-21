/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:25:51 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/17 16:33:41 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isprint('d'));
	printf("%d\n", ft_isprint('1'));
	printf("%d\n", ft_isprint('\n'));
}
*/