/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <mivelazc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:09:34 by mivelazc          #+#    #+#             */
/*   Updated: 2025/01/24 20:24:56 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_lib/so_long_lib.h"

void	read_map(t_mapa *mapa, char *file)
{
	int		fd;
	char	*line;
	char	*map_content;
	char	*temp;

	map_content = ft_strdup("");
	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_perror("Error\n");
		return ;
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		temp = map_content;
		map_content = ft_strjoin(map_content, line);
		free (temp);
		free (line);
	}

	close
}

void	read_map(t_mapa *mapa, char *path)
{
	int		fd;
	char	*line;
	char	*map_content;
	char	*temp;

	map_content = ft_strdup("");
	fd = open(path, O_RDONLY);
	if (fd < 0)
		ft_error("Error\nFailed to open the map file\n");

	while ((line = get_next_line(fd)) != NULL)
	{
		temp = map_content;
		map_content = ft_strjoin(map_content, line);
		free(temp);
		free(line);
	}

	close(fd);
	if (!*map_content)
		ft_error("Error\nThe map file is empty\n");

	mapa->data = ft_split(map_content, '\n');

	mapa->filas = 0;
	while (mapa->data[mapa->filas])
		mapa->filas++;
	mapa->columnas = ft_strlen(mapa->data[0]);
	if (!validar_mapa(mapa))
		ft_error("Error\nInvalid map\n");
}

static int	valid_line(t_mapa *mapa, char *linea)
{
	int	x;
	int	y;

	y = mapa->filas;
	x = 0;
	while (linea[x])
	{
		if (linea[x] == COLECCIONABLE)
			mapa->coleccionables++;
		else if (linea[x] == SALIDA)
			mapa->salidas++;
		else if (linea[x] == JUGADOR)
		{
			mapa->jugador++;
			mapa->jugador_x = x;
			mapa->jugador_y = y;
		}
		else if (linea[x] != SUELO && linea[x] != MURO)
			return (ft_perror("Error: Carácter inválido en el mapa"));
		x++;
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
		return (ft_perror("Error: No se pudo abrir el archivo"), NULL);
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
