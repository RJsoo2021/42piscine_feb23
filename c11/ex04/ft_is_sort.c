/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 21:37:57 by rsoo              #+#    #+#             */
/*   Updated: 2023/03/02 11:28:33 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	descount;
	int	asccount;

	i = 0;
	descount = 0;
	asccount = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			descount++;
		if (f(tab[i], tab[i + 1]) >= 0)
			asccount++;
		i++;
	}
	if (descount == i || asccount == i)
		return (1);
	return (0);
}
/*
int	ft_intcmp(int a, int b)
{
	return (b - a);
}

#include<stdio.h>
int main()
{
	int tab[] = {0, 2, 3, 7, 10};

	printf("%d", ft_is_sort(tab, 5, ft_intcmp));
}
*/
