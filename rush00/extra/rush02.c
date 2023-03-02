/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:21:47 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/12 11:02:23 by khaaziq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_putchar.c"

void	rush02(int x, int y)
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
			else if (i == 1 && (j == 1 || j == x))
				ft_putchar('A');
			else if (i == y && (j == 1 || j == x))
				ft_putchar('C');
			else if (i == 1 || j == 1 || i == y || j == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
	}
}
