/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 23:22:39 by orudek            #+#    #+#             */
/*   Updated: 2023/02/06 00:03:07 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;

	index = 1;
	while (index < size)
	{	
		if (tab[index - 1] > tab[index])
		{
			ft_swap(&tab[index], &tab[index - 1]);
			index = 0;
		}
		index++;
	}
}
