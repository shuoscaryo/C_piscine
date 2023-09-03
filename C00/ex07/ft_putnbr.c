/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:59:00 by orudek            #+#    #+#             */
/*   Updated: 2023/02/08 22:27:47 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	iterator;
	int	aux;

	iterator = 1;
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	while (iterator <= nb / 10)
		iterator *= 10;
	while (iterator > 0)
	{
		aux = nb / iterator + '0';
		write(1, &aux, 1);
		nb -= iterator * (nb / iterator);
		iterator /= 10;
	}
}

int main(){
	ft_putnbr(-2147483648);}
