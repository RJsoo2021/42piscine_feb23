/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:32:54 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/27 20:42:24 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}

/*
#include<stdio.h>
int main()
{
	int i;
	int j;
	scanf("%d %d", &i, &j);
	printf("%d", ft_recursive_power(i, j));
}
*/
