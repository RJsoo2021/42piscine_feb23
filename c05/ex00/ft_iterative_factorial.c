/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:42:05 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/19 16:09:16 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	x;

	i = 1;
	x = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		x *= i;
		i++;
	}
	return (x);
}
/*
int	main()
{
	int fac;
	scanf("%d", &fac);
	printf("%d", ft_iterative_factorial(fac));
}
*/