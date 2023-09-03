/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:08:23 by orudek            #+#    #+#             */
/*   Updated: 2023/02/17 13:11:11 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;

	i = 0;
	if (!*str && *to_find)
		return (0);
	if (!*str)
		return (str);
	while (*str)
	{
		while (to_find[i] && str[i] == to_find[i])
			i++;
		if (!to_find[i])
			return (str);
		i = 0;
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(int c,char** v)
{
	if(c)
		;
	printf("%p\n%p\n",ft_strstr(v[1],v[2]),strstr(v[1],v[2]));	
}*/
