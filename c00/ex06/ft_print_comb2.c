/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:30:07 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/10 16:07:01 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	printdigit(y, z)
{
	ft_putchar((y / 10) + '0');
	ft_putchar((y % 10) + '0');
	write(1, " ", 1);
	ft_putchar((z / 10) + '0');
	ft_putchar((z % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			printdigit(a, b);
			if (a != 98)
				write(1, ", ", 2);
			++b;
		}
		++a;
	}
}
