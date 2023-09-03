/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:01:13 by orudek            #+#    #+#             */
/*   Updated: 2023/02/20 13:08:48 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while ((long int)i * i <= (long int)nb)
	{
		if (i * i < 0)
			return (0);
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int c, char **v)
{
	if(c == 2)
		printf("%d", ft_sqrt(atoi(v[1])));
	return (0);
}
*/
