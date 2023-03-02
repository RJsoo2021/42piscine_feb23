/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:30:46 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/11 15:20:54 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

/*
int	main()
{
	int x;
	int y;

	x = 10;
	y = 3;

	int*ptr1;
	int*ptr2;

	ptr1 = &x;
	ptr2 = &y;

	ft_ultimate_div_mod(ptr1, ptr2);
	printf("%d %d", ptr1, ptr2);
}
*/
