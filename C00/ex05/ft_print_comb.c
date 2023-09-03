/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:46:50 by orudek            #+#    #+#             */
/*   Updated: 2023/02/04 18:10:36 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	index_1;
	int	index_2;
	int	index_3;

	index_1 = '0' - 1;
	while (++index_1 <= '9')
	{
		index_2 = index_1;
		while (++index_2 <= '9')
		{
			index_3 = index_2;
			while (++index_3 <= '9')
			{
				write(1, &index_1, 1);
				write(1, &index_2, 1);
				write(1, &index_3, 1);
				if (index_1 != '7' || index_2 != '8' || index_3 != '9')
					write(1, ", ", 2);
			}
		}
	}
}
