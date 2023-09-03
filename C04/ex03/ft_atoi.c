/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:02:19 by orudek            #+#    #+#             */
/*   Updated: 2023/02/20 12:18:06 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char *str)
{
	if (*str == ' ' || *str == '\f' || *str == '\n')
		return (1);
	if (*str == '\r' || *str == '\t' || *str == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	is_negative;
	int	count;

	is_negative = 1;
	count = 0;
	while (ft_isspace(str) || *str == '-' || *str == '+')
		if (*str++ == '-')
			is_negative *= -1;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			count = count * 10 + *str - '0';
		else
			break ;
		str++;
	}
	return (count * is_negative);
}
/*
#include <stdio.h>

int main(int argc, char ** argv){
	if(argc == 2)
	printf("%d",ft_atoi(argv[1]));
}
*/
