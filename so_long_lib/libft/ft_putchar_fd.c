/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mivelazc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:44:28 by mivelazc          #+#    #+#             */
/*   Updated: 2024/10/01 17:44:31 by mivelazc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*#include <stdio.h>
#include <fcntl.h>
int	main(void)
{
	// Ejemplo 1: Escribir en la salida estándar (stdout)
	ft_putchar_fd('A', 1); // Escribe 'A' en la consola

	// Ejemplo 2: Escribir en un archivo
	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
		// Abrir archivo
	if (fd == -1)
	{
		// Manejo de error si el archivo no pudo abrirse
		ft_putchar_fd('E', 2); // Escribe 'E' en la salida de errores (stderr)
		return (1);            // Finaliza el programa con error
	}
	ft_putchar_fd('B', fd); // Escribe 'B' en el archivo
	close(fd);              // Cerrar el archivo

	return (0); // Terminar el programa correctamente
}
*/