/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:45:04 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/27 16:39:47 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*returnarr;

	i = 0;
	returnarr = malloc(sizeof(int) * length);
	while (i < length)
	{
		returnarr[i] = f(tab[i]);
		i++;
	}
	return (returnarr);
}

/*
#include<stdio.h>
int	ft_square(int c)
{
	return (c * c);
}

int main()
{
	int tab[] = {1, 2, 3, 4, 5};
	int *out;
	int i;
	
	i = 0;
	out = ft_map(tab, 5, ft_square);

	while (out[i])
	{
		printf("%d", out[i]);
		i++;
	}
}
*/