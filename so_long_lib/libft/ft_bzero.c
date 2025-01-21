/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:47:39 by mivelazc          #+#    #+#             */
/*   Updated: 2024/09/21 15:21:11 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
	return ;
}

//funcion: bzero sirve para establecer los primeros
//bytes 'n' de la memoria apuntada 's' a 0.

/*#include <stdio.h>

int main(void)
{
    char s[] = "Kitty";
    size_t n;

    n = 2;
    printf("Antes: %s\n", s);
    ft_bzero(s, n);
    printf("Despues: %s\n", s);
    return (0);
}*/