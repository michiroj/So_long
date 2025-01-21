/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <mivelazc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:09:34 by mivelazc          #+#    #+#             */
/*   Updated: 2025/01/21 13:42:37 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_lib/so_long_lib.h"

t_mapa	*inicializar_mapa(void)
{
	t_mapa	*mapa;

	mapa = malloc(sizeof(t_mapa));
	if (!mapa)
		return (NULL);
	mapa->data = NULL;
	mapa->filas = 0;
	mapa->columnas = 0;
	mapa->coleccionables = 0;
	mapa->salidas = 0;
	mapa->jugador = 0;
	return (mapa);
}

static int	validar_linea(t_mapa *mapa, char *linea)
{
	int	i;

	i = 0;
	while (linea[i])
	{
		if (linea[i] == COLECCIONABLE)
			mapa->coleccionables++;
		else if (linea[i] == SALIDA)
			mapa->salidas++;
		else if (linea[i] == JUGADOR)
		{
			mapa->jugador++;
			mapa->jugador_x = mapa->filas;
			mapa->jugador_y = i;
		}
		else if (linea[i] != VACIO && linea[i] != MURO)
			return (ft_perror("Error: Carácter inválido en el mapa"));
		i++;
	}
	return (1);
}

// Lee el mapa desde un archivo y lo carga en la estructura t_mapa
t_mapa	*leer_mapa(const char *ruta)
{
	int		fd;
	char	*linea;
	t_mapa	*mapa;

	mapa = inicializar_mapa();
	fd = open(ruta, O_RDONLY);
	if (fd < 0)
		return (ft_perror("Error: No se pudo abrir el archivo"));
	while (linea)
	{
		if (!validar_linea(mapa, linea))
		{
			free(linea);
			close(fd);
			return (NULL);
		}
		mapa->filas++;
		free(linea);
		linea = obtener_linea(fd);
	}
	close(fd);
	return (mapa);
}
