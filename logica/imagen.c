/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imagen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <mivelazc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:05:03 by mivelazc          #+#    #+#             */
/*   Updated: 2025/01/24 17:04:08 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_lib/so_long_lib.h"

static void	draw_image(t_window *window, int x, int y, void *img)
{
	mlx_put_image_to_window(window->mlx, window->mlx_win, img, x * 64, y * 64);
}

void	render_map(t_window *window)
{
	int	y;
	int	x;

	y = 0;
	while (window->game->map[y][x])
	{
		x = 0;
		while (window->game->map[y][x])
		{
			if (window->game->map[y][x] == JUGADOR)
				draw_image(window, x, y, window->sprite->player);
			if (window->game->map[y][x] == MURO)
				draw_image(window, x, y, window->sprite->wall);
			if (window->game->map[y][x] == SALIDA)
				draw_image(window, x, y, window->sprite->exit);
			if (window->game->map[y][x] == COLECCIONABLE)
				draw_image(window, x, y, window->sprite->collectible);
			if (window->game->map[y][x] == SUELO)
				draw_image(window, x, y, window->sprite->floor);
			x++;
		}
		y++;
	}
}

int	load_images(t_window *window)
{
	window->sprite->player = mlx_xpm_file_to_image(window->mlx,
			"imagenes/otro.xpm", &window->game->ancho, &window->game->alto);
	window->sprite->wall = mlx_xpm_file_to_image(window->mlx,
			"imagenes/otro.xpm", &window->game->ancho, &window->game->alto);
	window->sprite->exit = mlx_xpm_file_to_image(window->mlx,
			"imagenes/otro.xpm", &window->game->ancho, &window->game->alto);
	window->sprite->collectible = mlx_xpm_file_to_image(window->mlx,
			"imagenes/lazoHK.xpm", &window->game->ancho, &window->game->alto);
	window->sprite->floor = mlx_xpm_file_to_image(window->mlx,
			"imagenes/otro.xpm", &window->game->ancho, &window->game->alto);
}
