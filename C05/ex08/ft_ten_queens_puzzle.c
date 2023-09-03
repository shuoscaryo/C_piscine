/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:02:21 by orudek            #+#    #+#             */
/*   Updated: 2023/02/22 12:39:37 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define SIZE 10

int	check_comb(int v[SIZE], int index)
{
	int	i;

	i = 1;
	while (i <= index)
	{
		if (v[index] - i == v[index - i])
			return (0);
		if (v[index] + i == v[index - i])
			return (0);
		if (v[index] == v[index - i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_print(int vector[SIZE])
{
	int		i;
	char	aux;

	i = 0;
	while (i < SIZE)
	{
		aux = vector[i] + '0';
		write(1, &aux, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	recursive(int index)
{
	static int	vector[SIZE];
	int			i;
	static int	count;

	i = 0;
	while (i < SIZE)
	{
		vector[index] = i;
		if (!check_comb(vector, index))
		{
			i++;
			continue ;
		}
		if (index < SIZE - 1)
			recursive(index + 1);
		else
		{
			ft_print(vector);
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	return (recursive(0));
}
/*
#include <stdio.h>
int main()
{
    printf("%d",ft_ten_queens_puzzle());
    return 0;
}*/
