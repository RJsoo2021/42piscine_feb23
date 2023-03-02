/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:21:47 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/11 16:23:06 by khaaziq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_putchar.c"

void	rush(int x, int y)
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
			else if ((j == 1 && i == 1) || (j == x && i == y && y > 1 && x > 1))
				ft_putchar('/');
			else if ((j == x && i == 1) || (j == 1 && i == y))
				ft_putchar('\\');
			else if (i == 1 || j == 1 || i == y || j == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
	}
}
