/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:37:28 by rsoo              #+#    #+#             */
/*   Updated: 2023/03/16 11:37:28 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int number;

    i = 0;
    sign = 1;
    number = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        number = (number * 10) + (str[i] - 48);
        i++;
    }
    return (sign * number);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
