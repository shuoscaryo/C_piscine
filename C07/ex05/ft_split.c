/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:19:57 by orudek            #+#    #+#             */
/*   Updated: 2023/02/23 13:34:47 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

int	ft_is_charset(char *str, char *charset)
{
	if (ft_strlen(charset) == 0)
		return (0);
	while (*charset)
		if (*str++ != *charset++)
			return (0);
	return (1);
}

int	ft_get_num_words(char *str, char *charset)
{
	int	word_len;
	int	num_words;
	int	charset_len;

	charset_len = ft_strlen(charset);
	word_len = 0;
	num_words = 0;
	while (*str)
	{
		if (ft_is_charset(str, charset))
		{
			if (word_len > 0)
				num_words++;
			word_len = 0;
			str += charset_len;
			continue ;
		}
		word_len++;
		str++;
	}
	if (word_len)
		num_words++;
	return (num_words);
}

char	*ft_get_word(char **str, char *charset)
{
	int		i;
	int		j;
	char	*word;

	j = 0;
	i = 0;
	while (!ft_is_charset(&(*str)[i], charset) && (*str)[i])
		i++;
	if (i == 0)
	{
		*str += ft_strlen(charset);
		return (0);
	}
	word = malloc(i + 1);
	while (j < i)
		word[j++] = *((*str)++);
	word[j] = '\0';
	*str += ft_strlen(charset);
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**out;
	int		words;
	int		i;

	i = 0;
	words = ft_get_num_words(str, charset);
	out = malloc(sizeof(char *) * (words + 1));
	while (i < words)
	{
		out[i] = ft_get_word(&str, charset);
		if (out[i] != 0)
			i++;
	}
	out[i] = 0;
	return (out);
}
/*
#include <stdio.h>
int main()
{
    char **hola;
    int i = 0;
    hola = ft_split("hola buenos... dias..puntos suspensivos......","...");
    while(hola[i])
        printf("%s\n",hola[i++]);
    printf("-----------\n");
    return (0);
}*/
