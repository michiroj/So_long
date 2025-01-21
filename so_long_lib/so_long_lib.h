/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_lib.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <mivelazc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:52:55 by mivelazc          #+#    #+#             */
/*   Updated: 2025/01/21 16:26:08 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_LIB_H
# define SO_LONG_LIB_H

# include "libft/libft.h"
# include "mlx_linux/mlx.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

# define TAM_SPRITE 64
# define VACIO '0'
# define MURO '1'
# define COLECCIONABLE 'C'
# define SALIDA 'E'
# define JUGADOR 'P'

// Estructura para el mapa
typedef struct s_mapa
{
	char		**data;
	int			filas;
	int			columnas;
	int			coleccionables;
	int			salidas;
	int			jugador;
	int			jugador_x;
	int			jugador_y;
}				t_mapa;

// Estructura para los sprites
typedef struct s_sprites
{
	void		*player;
	void		*wall;
	void		*exit;
	void		*collectible;
	void		*vacio;
}				t_sprites;

// Estructura principal del juego
typedef struct s_juego
{
	void		*mlx;
	void		*ventana;
	int			ancho;
	int			alto;
	t_sprites	sprites;
	t_mapa		*mapa;
	int			jugador_x;
	int			jugador_y;
	int			coleccionados;
}				t_juego;

// Prototipos de funciones
int				inicializar_juego(t_juego *juego, const char *ruta_mapa);
t_mapa			*leer_mapa(const char *ruta);
void			liberar_mapa(t_mapa *mapa);
int				cargar_sprites(t_juego *juego);
int				manejar_teclas(int keycode, t_juego *juego);
int				cerrar_juego(t_juego *juego);
int				renderizar(t_juego *juego);
void			ft_putstr_fd(char *s, int fd);
int				ft_perror(const char *msg);

#endif
