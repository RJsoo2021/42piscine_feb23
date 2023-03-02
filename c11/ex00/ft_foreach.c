/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:44:37 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/27 16:38:06 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

/*
#include<stdio.h>
void 	ft_print(int c)
{
	printf("%d", c);
}

int main()
{
	int tab[] = {1, 2, 3, 4, 5}; 
	
	ft_foreach(tab, 5, ft_print);
}
*/
