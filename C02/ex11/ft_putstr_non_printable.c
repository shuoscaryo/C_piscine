/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:28:21 by orudek            #+#    #+#             */
/*   Updated: 2023/02/12 15:05:40 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_printable(unsigned char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

void	ft_print_hex(unsigned char c)
{
	char	first_char;
	char	last_char;

	first_char = (c & 0xf0) >> 4;
	last_char = c & 0x0f;
	write(1, &"\\", 1);
	write(1, &"0123456789abcdef"[(int)first_char], 1);
	write(1, &"0123456789abcdef"[(int)last_char], 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_is_printable(str[i]))
			ft_print_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
/*
int main()
{
	for(unsigned int i=0;i<256;i++)
	{
		ft_putstr_non_printable((char*)&i);
		ft_putchar('\n');
	}
}
*/
