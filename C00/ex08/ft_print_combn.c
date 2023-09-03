/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:24:57 by orudek            #+#    #+#             */
/*   Updated: 2023/02/05 18:46:55 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int num, int size)
{
	int	iterator;
	int	aux;

	iterator = 1;
	while (0 < --size)
		iterator *= 10;
	while (iterator > 0)
	{
		aux = num / iterator + '0';
		write(1, &aux, 1);
		num -= iterator * (num / iterator);
		iterator /= 10;
	}
}

int	ft_last(int num, int size)
{
	int	index;
	int	last_num;

	last_num = 0;
	index = 10 - size;
	while (size-- > 0)
	{
		last_num *= 10;
		last_num += index++;
	}
	return (last_num == num);
}

void	ft_recursive(int num, int i, int current_n, int n)
{
	num = num * 10 + i;
	if (n == 0)
		return ;
	while (i <= 9)
	{
		if (i > 10 - n + current_n)
			break ;
		if (current_n < n - 1)
			ft_recursive(num, i + 1, current_n + 1, n);
		else
		{
			ft_print(num, n);
			if (!ft_last(num, n))
				write(1, ", ", 2);
		}
		num++;
		i++;
	}
}

void	ft_print_combn(int n)
{
	ft_recursive(0, 0, 0, n);
}
