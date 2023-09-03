/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:25:27 by orudek            #+#    #+#             */
/*   Updated: 2023/02/11 18:42:18 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*aux;

	aux = dest;
	while (*aux)
		aux++;
	while (*src)
		*aux++ = *src++;
	*aux = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(int c, char **v)
{
	if (c)
	{}
	printf("%s\n",ft_strcat(v[1],v[2]));
}
*/
