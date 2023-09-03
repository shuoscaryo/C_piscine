/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:25:19 by orudek            #+#    #+#             */
/*   Updated: 2023/02/11 15:20:22 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char hola[40];
	char b[40];
	char *adios = "adios buenos dias";
	int c = strlcpy(hola,adios,40);
	int d = ft_strlcpy(b,adios,40);
	printf("%d %s %s\n",c,hola,adios);
	printf("%d %s %s\n",c,b,adios);
}
*/
