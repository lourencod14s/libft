/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 22:17:43 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/23 22:35:41 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*string;

	string = (char *) s;
	ft_memset(string, '\0', n);
}

/* 
** The ft_bzero() function erases the data in the n bytes of the memory starting
** at the location pointed to by s, by writing zeros (bytes containing '\0')
** to that area.
*/
/*int	main()
{
	char buff[] = "556565656556";
	char buff2[] = "556565656556";

	ft_bzero(buff, 8);
	printf("%s\n", buff);
	bzero(buff2, 8);
	printf("%s\n", buff2);
return 0;
}*/