/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:42:29 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/25 11:22:53 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//takes array of strings (av) and size of array (ac)

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dest;
	int		i;

	i = 0;
	dest = NULL;
	if (!str)
		return (dest);
	while (str[i])
		i++;
	dest = malloc(i + 1);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	arr = malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	if (arr == NULL)
		return (NULL);
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[ac].str = 0;
	return (arr);
}
/*
#include <stdio.h>
int main()
{
	char *array[] = {"test1", "test2", "test3"};
	int i;

	i = 0;
	t_stock_str *arr = ft_strs_to_tab(3, array);
	while (i < 3)
	{
		printf("Size: %d, Str: %s, Cpy: %s\n", arr[i].size, arr[i].str, arr[i].copy);
		free(arr[i].copy);
		i++;
	}
	free(arr);
}
*/