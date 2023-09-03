/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:56:43 by orudek            #+#    #+#             */
/*   Updated: 2023/02/11 17:23:05 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_dir(void *addr)
{
	int		i;
	char	last_char;
	char	first_char;

	i = sizeof (void *) - 1;
	while (i >= 0)
	{
		first_char = (((char *)&addr)[i] & 0xf0) >> 4;
		last_char = ((char *)&addr)[i] & 0x0f;
		write(1, &"0123456789abcdef"[(int)first_char], 1);
		write(1, &"0123456789abcdef"[(int)last_char], 1);
		i--;
	}
	write(1, ": ", 2);
}

void	ft_print_hex(void *addr, unsigned int size, unsigned int max_size)
{
	unsigned int	i;
	char			last_char;
	char			first_char;

	i = 0;
	while (i < max_size)
	{
		if (i < size)
		{
			first_char = (((char *)addr)[i] & 0xf0) >> 4;
			last_char = ((char *)addr)[i] & 0x0f;
			write(1, &"0123456789abcdef"[(int)first_char], 1);
			write(1, &"0123456789abcdef"[(int)last_char], 1);
		}
		else
			write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
}

void	ft_print_str(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (((char *)addr)[i] >= ' ' && ((char *)addr)[i] <= '~')
			write(1, &((char *)addr)[i], 1);
		else
			write(1, &".", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i * 16 < size)
	{
		ft_print_dir(addr + i * 16);
		if ((int)i * 16 < (int)size - 16)
		{
			ft_print_hex(addr + i * 16, 16, 16);
			ft_print_str(addr + i * 16, 16);
		}
		else
		{
			ft_print_hex(addr + i * 16, size - i * 16, 16);
			ft_print_str(addr + i * 16, size - i * 16);
		}
		i++;
	}
	return (addr);
}
/*
int main(void)
{
	char *hola = 
		"Hola buenos dias esto es una cadena muy larga para "
		"poder comprobar que se está escribiendo bien todo y \n \t \a";
	ft_print_memory(hola,0);
	return 0;
}
*/
