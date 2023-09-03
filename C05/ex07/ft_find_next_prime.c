/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:19:26 by orudek            #+#    #+#             */
/*   Updated: 2023/02/22 12:36:27 by orudek           ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		if (nb <= 2)
			return (2);
		nb++;
	}
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int c, char **v)
{
	if(c == 2)
    	printf("%d\n",ft_find_next_prime(atoi(v[1])));
    return (0);
}
*/
