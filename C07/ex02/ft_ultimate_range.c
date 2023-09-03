/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:23:34 by orudek            #+#    #+#             */
/*   Updated: 2023/02/22 14:07:21 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	len = max - min;
	*range = malloc(sizeof(int) * len);
	if (*range == 0)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int c, char **v)
{
	if (c != 3)
		return 0;
	int i = 0;
	int *range;
	int size = ft_ultimate_range(&range,atoi(v[1]),atoi(v[2]));
	printf("pointer =  %p \nsize = %d\n\n",range,size);
	while(i < size)
		printf("%d, ",range[i++]);
	printf("\n");
	return 0;
}*/
