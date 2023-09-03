/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:07:24 by orudek            #+#    #+#             */
/*   Updated: 2023/02/20 13:58:37 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while ((long int) i * i <= (long int) nb)
	{
		if (nb % i++ == 0)
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int c, char **v)
{
	if(c == 2)
		printf("%d\n", ft_is_prime(atoi(v[1])));
	return 0;
}*/
