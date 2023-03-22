/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:37:20 by rsoo              #+#    #+#             */
/*   Updated: 2023/03/15 16:37:20 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"

int main(int ac, char **av)
{
    unsigned int rushnum;
    unsigned int xcoor;
    unsigned int ycoor;

    rushnum = (unsigned int)ft_atoi(av[1]);
    xcoor = (unsigned int)ft_atoi(av[2]);
    ycoor = (unsigned int)ft_atoi(av[3]);
    if (ac == 4)
    {
        if (rushnum == 0)
            rush00(xcoor, ycoor);
        else if (rushnum == 1)
            rush01(xcoor, ycoor);
        else if (rushnum == 2)
            rush02(xcoor, ycoor);
        else if (rushnum == 3)
            rush03(xcoor, ycoor);
        else if (rushnum == 4)
            rush04(xcoor, ycoor);
        else
            write(1, "Please enter a rush number: 0, 1, 2, 3, 4", 42);
        write(1, "\n", 1);
    }
    return (0);
}