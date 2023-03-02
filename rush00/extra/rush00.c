/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:18:13 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/12 11:01:43 by khaaziq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_putchar.c"

void	rush00(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x + 1)
		{
			if (j == x + 1)
				ft_putchar('\n');
			else if ((j == 1 || j == x) && i > 1 && i < y)
				ft_putchar('|');
			else if ((i == 1 || i == y) && j > 1 && j < x)
				ft_putchar('-');
			else if (i == 1 || i == y)
				ft_putchar('o');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
	}
}
