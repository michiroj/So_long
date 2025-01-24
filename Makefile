# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mivelazc <mivelazc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/10 12:04:18 by mivelazc          #+#    #+#              #
#    Updated: 2025/01/23 16:32:49 by mivelazc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRCS = ./logica/ft_perror.c ./logica/imagen.c ./logica/main.c ./logica/mapa.c ./logica/ventana.c  ./logica/window.c
OBJ = $(SRCS:.c=.o)

MLX_DIR = logica/so_long_lib/mlx_linux
MLX_LIB = $(MLX_DIR)/libmlx_Linux.a
MLX_FLAGS = -L$(MLX_DIR) -lmlx_Linux -lXext -lX11 -lm

LIBFT_DIR = logica/so_long_lib/libft
LIBFT = $(LIBFT_DIR)/libft.a

RM = rm -f

# Regla principal
all: $(NAME)

# Regla para compilar tu proyecto
$(NAME): $(LIBFT) $(MLX_LIB) $(OBJ)
	$(CC) $(FLAGS) $(OBJ) $(LIBFT) $(MLX_FLAGS) -o $(NAME)

# Regla para compilar la libft
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Regla para compilar la minilibx
$(MLX_LIB):
	$(MAKE) -C $(MLX_DIR)

# Regla para compilar los archivos objeto
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

# Limpieza
clean:
	$(MAKE) clean -C $(MLX_DIR)
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

# Reconstrucción
re: fclean all

.PHONY: all clean fclean re
