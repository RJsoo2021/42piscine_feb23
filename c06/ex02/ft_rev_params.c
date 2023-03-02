/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:31:36 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/17 10:41:05 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	j;
	int	i;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[argc - i][j] != '\0')
		{
			ft_putchar(argv[argc - i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
