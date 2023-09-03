/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:22:50 by orudek            #+#    #+#             */
/*   Updated: 2023/02/22 13:53:33 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	aux;

	aux = 0;
	while (*str != '\0')
	{
		aux++;
		str++;
	}
	return (aux);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;
	int		i;

	len = ft_strlen(src);
	i = 0;
	dest = malloc(sizeof(char) * len + 1);
	if (dest == 0)
		return (dest);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char *b;
	b = "hola que tal";
	char *a;
	a = ft_strdup(b);
	printf(" %s ", a);
}*/
