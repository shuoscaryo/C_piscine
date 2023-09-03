/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:23:46 by orudek            #+#    #+#             */
/*   Updated: 2023/02/23 13:31:28 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*aux;

	aux = dest;
	while (*aux != '\0')
		aux++;
	while (*src != '\0')
	{
		*aux = *src;
		aux++;
		src++;
	}
	*aux = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	aux;

	aux = 0;
	while (*str != '\0')
	{
		aux++;
		str++;
	}
	return (aux);
}

void	concatenate(char *c, char **str, char *sep, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		ft_strcat(c, str[i]);
		ft_strcat(c, sep);
		i++;
	}
	ft_strcat(c, str[i]);
}

char	*ft_strjoin(int size, char **str, char *sep)
{
	char	*c;
	int		len;
	int		i;

	i = 0;
	len = 0;
	if (size == 0)
	{
		c = malloc(sizeof(char));
		*c = 0;
		return (c);
	}
	while (i < size - 1)
		len += ft_strlen(str[i++]) + ft_strlen(sep);
	len += ft_strlen(str[i]);
	c = malloc(sizeof(char) * (len + 1));
	concatenate(c, str, sep, size);
	return (c);
}
/*
#include <stdio.h>
int main()
{
    char *v[4];
    v[0] = "feo";
    v[1] = "";
    v[2] = "tal";
	v[3] = "";
    printf("%s", ft_strjoin(4, v, "palabra"));

    return 0;
}*/
