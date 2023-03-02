/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:15:06 by rsoo              #+#    #+#             */
/*   Updated: 2023/03/01 11:10:22 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		size;
	char	*temp;

	j = 0;
	size = 0;
	while (tab[size])
		size++;
	while (j < size)
	{
		i = 0;
		while (i < size - j - 1)
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}

int	ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] && b[i])
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (a[i] - b[i]);
}
/*
#include<stdlib.h>
#include<stdio.h>
int main()
{
	char **tab;
	int i;

	tab = malloc(sizeof(char*) * 4);
	tab[0] = "test9";
	tab[1] = "test6";
	tab[2] = "test1";
	tab[3] = 0;
	i = 0;

	ft_advanced_sort_string_tab(tab, ft_strcmp);

	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
*/
