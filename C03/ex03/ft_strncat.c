/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:44:29 by orudek            #+#    #+#             */
/*   Updated: 2023/02/11 18:52:28 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*aux;
	unsigned int	i;

	i = 0;
	aux = dest;
	while (*aux)
		aux++;
	while (*src && i++ < nb)
		*aux++ = *src++;
	*aux = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main(int c, char **v)
{
	if(c)
		;
	printf("%s\n",ft_strncat(v[1],v[2],3));
}*/
