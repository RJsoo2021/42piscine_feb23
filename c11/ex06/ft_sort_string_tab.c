/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:51:46 by rsoo              #+#    #+#             */
/*   Updated: 2023/03/01 22:47:07 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		size;
	char	*temp;

	j = 0;
	size = 0;
	while (tab[size] != 0)
		size++;
	while (j < size)
	{
		i = 0;
		while (i < size - j - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = temp;
			}
			i++;
		}
		j++;
	}
}

/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char **tab;
	int i;

	i = 0;
	tab = malloc(sizeof(char*) * 4);
	tab[0] = "tez";
	tab[1] = "teg";
	tab[2] = "tea";
	tab[3] = 0;

	ft_sort_string_tab(tab);

	while(tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
*/