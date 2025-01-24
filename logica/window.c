/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <mivelazc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:10:07 by mivelazc          #+#    #+#             */
/*   Updated: 2025/01/24 15:51:35 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_lib/so_long_lib.h"

void	init_game(t_window *window, t_juego *game)
{
	window->mlx = mlx_init();
	window->mlx_win = mlx_new_window(window->mlx, game->x * 64, game->y * 64,
			"so_long");
}

int	close_window(t_window *window)
{
	if (window->mlx_win)
	{
		mlx_clear_window(window->mlx, window->mlx_win);
		//mlx_destroy_image(window->mlx, window->game->
		/*(imagen que quiero eliminar));*/
	}
	if (window->mlx)
	{
		mlx_destroy_display(window->mlx);
		free(window->mlx);
	}
	exit(0);
	return (0);
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

/*int main()
{
	void	*mlx;
	void	*window;

	mlx = mlx_init();
	window = mlx_new_window(mlx, 1500, 800, "HELLO KITTY!");

	mlx_key_hook(window, handle_keypress, NULL);
	mlx_hook(window, 17, 0, close_window, NULL);

	//draw()
	
	void	*img;
	char	*relative_path = "./lazoHK.xpm";
	int		img_width;
	int		img_height;
	img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);

	mlx_put_image_to_window(mlx, window, img, 0, 0);
	mlx_put_image_to_window(mlx, window, img, 200, 0);
	mlx_put_image_to_window(mlx, window, img, 100, 100);
	mlx_put_image_to_window(mlx, window, img, 200, 200);
	mlx_put_image_to_window(mlx, window, img, 200, 400);
	mlx_put_image_to_window(mlx, window, img, 100, 300);
	mlx_put_image_to_window(mlx, window, img, 0, 200);
	mlx_put_image_to_window(mlx, window, img, 0, 400);


	mlx_loop(mlx);

	return(0);
}*/

/*int	handle_keypress(int keycode, void *param)
{
	(void)param;
	if (keycode == 65307)
		exit(0);
	return (0);
}*/