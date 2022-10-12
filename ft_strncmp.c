/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 20:37:34 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/24 01:50:30 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
** The ft_strncmp() function shall compare not more than n bytes (bytes
** that follow a NUL character are not compared) from the array pointed 
** to by s1 to the array pointed to by s2.
*/
/*int main()
{
    char *s1 = "aaaaa";
    char *s2 = "AAAAA";
    
    printf("%d\n", ft_strncmp(s1, s2, 5));
    return 0;
}*/