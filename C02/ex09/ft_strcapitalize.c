/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:51:49 by orudek            #+#    #+#             */
/*   Updated: 2023/02/11 18:09:44 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		first;
	char	*i;

	i = str -1;
	first = 1;
	while (*(++i))
	{
		if (first && *i >= 'a' && *i <= 'z')
			*i += 'A' - 'a';
		else if (!first && *i >= 'A' && *i <= 'Z')
			*i += 'a' - 'A';
		if (!is_alpha(*i))
			first = 1;
		else
			first = 0;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc){}
	printf("%s\n",ft_strcapitalize(argv[1]));
}
*/
