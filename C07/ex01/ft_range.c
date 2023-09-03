/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:23:16 by orudek            #+#    #+#             */
/*   Updated: 2023/02/22 13:54:08 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*result;
	int	i;

	if (min >= max)
		return (0);
	i = 0;
	len = max - min;
	result = malloc(sizeof(int) * len);
	if (result == 0)
		return (result);
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
/*
int main(void)
{
	int	*a;
	a = ft_range(-5, 10);
	for(int i=0;i<15;i++)
	{
		printf(" %d ", a[i]);
	}
}*/
