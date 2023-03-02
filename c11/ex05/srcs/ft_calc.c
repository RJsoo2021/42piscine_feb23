/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:44:13 by rsoo              #+#    #+#             */
/*   Updated: 2023/03/01 22:45:38 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	astcmp(char b)
{
	char	*ast;

	ast = "*";
	if (b - ast[0] == 0)
		return (1);
	return (0);
}

void	ft_calc(char *a, char *b, char *c)
{
	int	value1;
	int	value2;

	value1 = ft_atoi(a);
	value2 = ft_atoi(c);
	if (b[0] == '+')
		ft_putnbr(ft_plus(value1, value2));
	else if (b[0] == '-')
		ft_putnbr(ft_minus(value1, value2));
	else if (astcmp(b[0]) == 1)
		ft_putnbr(ft_multiply(value1, value2));
	else if (value2 == 0 && b[0] == '/')
		ft_putstr("Stop : division by zero");
	else if (value2 == 0 && b[0] == '%')
		ft_putstr("Stop : modulo by zero");
	else if (b[0] == '/')
		ft_putnbr(ft_divide(value1, value2));
	else if (b[0] == '%')
		ft_putnbr(ft_modulo(value1, value2));
	else
		ft_putnbr(0);
}
