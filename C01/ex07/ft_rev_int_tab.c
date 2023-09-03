/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 23:10:50 by orudek            #+#    #+#             */
/*   Updated: 2023/02/05 23:26:20 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	iterator;

	iterator = -1;
	while (++iterator < size / 2)
	{
		temp = tab[iterator];
		tab[iterator] = tab[size - 1 - iterator];
		tab[size - 1 - iterator] = temp;
	}
}
