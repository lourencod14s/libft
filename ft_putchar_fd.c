/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:43:27 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/22 22:32:48 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/* 
**The ft_putchar_fd() function output a given character c to a file descriptor.
*/
/*int	main(void)
{
	printf("\nTeste de putchar a: ");
	ft_putchar_fd('a', 1);
	int fd = open("testputchar", O_WRONLY | O_CREAT, 0777);
	ft_putchar_fd('b', fd);
	close(fd);
}*/