/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:12:32 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/12 11:27:36 by khaaziq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"rush00.c"
#include"rush01.c"
#include"rush02.c"
#include"rush03.c"
#include"rush04.c"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

void	write_error(void)
{
	write(1, "Invalid number of arguments.", 29);
	write(1, "You need to put 3 arguments.", 28);
}

int	main(int i, char**arg)
{
	int	x;
	int	y;
	int	j;

	if (i != 4)
	{
		write_error();
		return (0);
	}
	x = ft_atoi(arg[1]);
	y = ft_atoi(arg[2]);
	j = ft_atoi(arg[3]);
	if (j == 0 || j == 00)
		rush00(x, y);
	if (j == 1 || j == 01)
		rush01(x, y);
	if (j == 2 || j == 02)
		rush02(x, y);
	if (j == 3 || j == 03)
		rush03(x, y);
	if (j == 4 || j == 04)
		rush04(x, y);
	if (j < 0 || j > 4)
		write(1, "Invalid rush number, please select between 0 and 4", 51);
	return (0);
}
