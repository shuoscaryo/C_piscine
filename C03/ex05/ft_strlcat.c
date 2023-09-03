/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:36:55 by orudek            #+#    #+#             */
/*   Updated: 2023/02/17 13:41:34 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_src;
	unsigned int	size_dest;

	size_src = ft_len(src);
	size_dest = ft_len(dest);
	i = size_dest;
	while ((int)i < (int)size - 1 && *src)
		dest[i++] = *src++;
	dest[i] = '\0';
	if (size_src >= size)
		return (size_src + size);
	else
		return (size_src + size_dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(int c,char **v){
	if(c)
		;
	printf("%d %s",ft_strlcat(v[1],v[2],0),v[1]);
//	printf("%lu %s",strlcat(v[1],v[2],10),v[1]);
}*/
