/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:56:00 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/27 00:24:03 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*pth;

	if (nitems == 0 || size == 0)
		return (NULL);
	if (nitems > 2147483647 / size)
		return (NULL);
	pth = (void *)malloc(nitems * size);
	if (!pth)
		return (NULL);
	ft_bzero(pth, nitems * size);
	return (pth);
}

/* 
** The ft_calloc() function allocates memory for an array of nmemb elements of 
** size bytes each and returns a pointer to the allocated memory. The memory
** is set to zero. If nmemb or size is 0, then calloc() returns either NULL,
** or a unique pointer value that can later be successfully passed to free().
*/