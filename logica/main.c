/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <mivelazc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:28:11 by mivelazc          #+#    #+#             */
/*   Updated: 2025/01/21 16:28:15 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_lib/so_long_lib.h"

int	main(void)
{
	t_mapa	*mapa;

	mapa = leer_mapa("mapas/maps.ber");
	if (mapa == NULL)
	{
		printf("Hubo un error al leer el mapa.\n");
		return (1);
	}
	printf("Filas: %d\n", mapa->filas);
	printf("Columnas: %d\n", mapa->columnas);
	printf("Coleccionables: %d\n", mapa->coleccionables);
	printf("Salidas: %d\n", mapa->salidas);
	printf("Jugador: %d en (%d, %d)\n", mapa->jugador, mapa->jugador_x,
			mapa->jugador_y);
	free(mapa);
	return (0);
}
