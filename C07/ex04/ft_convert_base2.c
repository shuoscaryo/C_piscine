/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:58:07 by orudek            #+#    #+#             */
/*   Updated: 2023/02/23 13:39:16 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

int	ft_base_ok(char *str)
{
	int	i;
	int	size;

	size = ft_strlen(str);
	if (size <= 1)
		return (0);
	while (*str)
	{
		if (*str == '-' || *str == '+' || *str < ' ' || *str > '~')
			return (0);
		i = 1;
		while (str[i])
		{
			if (str[i] == *str)
				return (0);
			i++;
		}
		str++;
	}
	return (1);
}

int	ft_in_base(char in, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (in == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_get_index( char in, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (in == base[i])
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	count;

	sign = 1;
	count = 0;
	if (!ft_base_ok(base))
		return (0);
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign *= -1;
	while (*str)
	{
		if (ft_in_base(*str, base))
			count = count * ft_strlen(base) + ft_get_index(*str, base);
		else
			break ;
		str++;
	}
	return (count * sign);
}
/*
// código de ejemplo para probar atoibase
#include <stdio.h>
int main(int c, char **v)
{
	if(c == 3)
    	printf("%d",ft_atoi_base(v[1],v[2]));
    return 0;
}
*/
