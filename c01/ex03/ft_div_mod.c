/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:28:47 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/11 14:28:39 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	c;
	int	d;

	c = a / b;
	d = a % b;
	*div = c;
	*mod = d;
}

/*
int main()
{
	int a;
	a = 11;
	int b;
	b = 5;
	int*ptra;
	ptra = &a;
	int*ptrb;
	ptrb = &b;
	ft_div_mod(a, b, ptra, ptrb);
	printf("%d %d", a, b);
}
*/
