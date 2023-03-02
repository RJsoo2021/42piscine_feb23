/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:42:19 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/27 20:56:27 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//return 1: 0< element returns not 0
//return 0: all return 0

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
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
		if (str[i] == 'A')
			return (1);
		i++;
	}
	return (0);
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char **tab; 
	
	tab = malloc(sizeof(char*) * 4);
	tab[0] = "a";
	tab[1] = "A";
	tab[2] = "a";
	tab[3] = 0;
	printf("%d", ft_any(tab, ft_checkA));
}
*/