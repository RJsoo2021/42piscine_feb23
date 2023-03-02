/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:56:59 by rsoo              #+#    #+#             */
/*   Updated: 2023/03/02 10:51:34 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (length == 0)
		return (0);
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

/*
int ft_checkA(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i++] == 'A')
			return (1);
	}
	return (0);
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char **tab;

	tab = malloc(sizeof(char*) * 3);
	tab[0] = "A";
	tab[1] = "A";
	tab[2] = "a";

	printf("%d", ft_count_if(tab, 3, ft_checkA));
}
*/