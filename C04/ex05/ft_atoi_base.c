/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:27:48 by orudek            #+#    #+#             */
/*   Updated: 2023/02/20 12:37:16 by orudek           ###   ########.fr       */
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
	int	is_negative;
	int	count;
	int	len;

	len = ft_strlen(base);
	is_negative = 0;
	count = 0;
	if (!ft_base_ok(base))
		return (0);
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	while (*str)
	{
		if (*str == '-')
			is_negative = !is_negative;
		else if (ft_in_base(*str, base))
			count = count * len + ft_get_index(*str, base);
		else if (*str != '+')
			break ;
		str++;
	}
	return (count * ((is_negative == 0) - (is_negative != 0)));
}
/*
int main()
{
    printf("%d",ft_atoi_base("1100100","01"));
    return 0;
}*/
