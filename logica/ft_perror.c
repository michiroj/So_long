/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <mivelazc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:54:06 by mivelazc          #+#    #+#             */
/*   Updated: 2025/01/21 16:19:51 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_lib/so_long_lib.h"

int	ft_perror(const char *msg)
{
	printf("%s\n", msg);

	exit(EXIT_FAILURE);
}
