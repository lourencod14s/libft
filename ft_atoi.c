/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 22:04:35 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/24 19:54:28 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int	rf;
	int	si;
	int	id;

	rf = 0;
	si = 1;
	id = 0;
	while (ptr[id] == '\t' || ptr[id] == '\n' || ptr[id] == '\r' || \
	ptr[id] == '\v' || ptr[id] == '\f' || ptr[id] == ' ')
		id++;
	if (ptr[id] == '-' || ptr[id] == '+')
	{
		if (ptr[id] == '-')
		{
			si = -1;
		}
		id++;
	}
	while (ptr[id] != '\0' && ptr[id] >= '0' && ptr[id] <= '9')
	{
		rf = rf * 10 + ptr[id] - '0';
		id++;
	}
	return (si * rf);
}

/* 
** The ft_atoi() function converts the initial portion of the string pointed
** to by *ptr to int.
*/
/*int main()
{
	char	str1[] = "-1234";
	int	val = ft_atoi(str1);
	printf("%d\n ", val);
	return 0;
}*/