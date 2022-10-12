/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:18:28 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/21 21:53:20 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	str = NULL;
	str = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return ("Memory allocation error!");
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
** The ft_strdup() function returns a pointer to a new string which is
** a duplicate of the string s. Memory for the new string is obtained 
** with malloc(), and can be freed with free().
*/