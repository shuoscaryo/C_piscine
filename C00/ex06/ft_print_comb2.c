/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:04:58 by orudek            #+#    #+#             */
/*   Updated: 2023/02/04 18:23:35 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	tens;
	int	units;

	units = nb % 10 + '0';
	tens = nb / 10 + '0';
	write(1, &tens, 1);
	write(1, &units, 1);
}

void	ft_print_comb2(void)
{
	int	index_1;
	int	index_2;

	index_1 = -1;
	while (++index_1 <= 99)
	{
		index_2 = index_1;
		while (++index_2 <= 99)
		{
			ft_putnbr(index_1);
			write(1, " ", 1);
			ft_putnbr(index_2);
			if (index_1 != 98 || index_2 != 99)
				write(1, ", ", 2);
		}
	}
}
