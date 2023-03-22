/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:30:17 by rsoo              #+#    #+#             */
/*   Updated: 2023/03/16 11:30:17 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"

void    rush03(unsigned int x, unsigned int y)
{
    unsigned int l;
    unsigned int w;

    w = 1;
    if (x == 0)
        return ;
    while (w != y + 1)
    {
        l = 1;
        while (l != x + 1)
        {
            if ((l == 1 && w == 1) || (w == y && l == 1))
                ft_putchar('A');
            else if ((l == x && w == 1) || (w == y && l == x))
                ft_putchar('C');
            else if (w == y || w == 1 || l == x || l == 1)
                ft_putchar('B');
            else
                ft_putchar(' ');
            l++;
        }
        w++;
        ft_putchar('\n');
    }
}