/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:52:25 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/27 14:13:53 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//is_sep: check if char is separator or in the charset

//word_num: calculates the number of words (malloc the array of strings + \0)

//word_len: calculates the size of each word 
//(malloc for each string of different lengths + \0)

#include<stdlib.h>

int	is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	word_num(char *str, char *charset)
{
	int	i;
	int	word_num;

	i = 0;
	word_num = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i] && !is_sep(str[i], charset))
			word_num++;
		while (str[i] && !is_sep(str[i], charset))
			i++;
	}
	return (word_num);
}

int	word_len(char *str, char *charset, int i)
{
	int	word_len;
	int	j;

	word_len = 0;
	j = 0;
	while (str[i + j] && !is_sep(str[i + j], charset))
	{
		word_len++;
		j++;
	}
	return (word_len);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;
	int		j;
	char	*k;

	strings = malloc(sizeof(char *) * (word_num(str, charset) + 1));
	if (!strings)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (!str[i])
			break ;
		strings[j] = malloc(word_len(str, charset, i) + 1);
		k = strings[j];
		while (str[i] && !is_sep(str[i], charset))
			*k++ = str[i++];
		*k = '\0';
		j++;
	}
	strings[j] = 0;
	return (strings);
}

/*
#include<stdio.h>
#include<unistd.h>
int main()
{
	char str[] = "What is love, baby dont hurt me. Baby dont hurt me, no more.";
	char charset[] = " ,.";
	int i;
	int j;
	char **split;

	i = 0;
	j = 0;
	split = ft_split(str, charset);
	while (split[i])
	{
		j = 0;
		while (split[i][j])
		{
			printf("%c", split[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
*/