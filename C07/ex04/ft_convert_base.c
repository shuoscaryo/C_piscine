/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:58:02 by orudek            #+#    #+#             */
/*   Updated: 2023/02/23 13:37:57 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_base_ok(char *str);
int	ft_atoi_base(char *str, char *base);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src)
		dest[i++] = *src++;
	return (dest);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		len;
	char	v[33];
	int		i;
	int		j;

	i = 0;
	j = 1;
	if (!ft_base_ok(base))
		return (0);
	len = ft_strlen(base);
	if (nbr < 0)
		v[i++] = '-';
	while (j <= nbr / len)
		j *= len;
	while (j > 0)
	{
		v[i++] = base[(nbr / j) * ((nbr >= 0) - (nbr < 0))];
		nbr %= j;
		j /= len;
	}
	v[i] = '\0';
	return (ft_strcpy(malloc(i + 1), v));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (ft_base_ok(base_from) && ft_base_ok(base_to))
		return (ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to));
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main(int c, char **v)
{
	if(c == 4)
	{
		printf("%s\n",ft_convert_base(v[1],v[2],v[3]));
	}
	return (0);
}*/
