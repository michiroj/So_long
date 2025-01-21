/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <mivelazc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:10:07 by mivelazc          #+#    #+#             */
/*   Updated: 2025/01/21 16:26:57 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_lib/so_long_lib.h"

int handle_keypress(int keycode, void *param)
{
	(void)param;

	if (keycode == 65307)
		exit(0);
	return(0);
}

int close_window(void *param)
{
	(void)param;
	exit(0);
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