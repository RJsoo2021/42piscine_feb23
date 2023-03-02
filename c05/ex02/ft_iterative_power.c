/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:45:21 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/20 10:09:51 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (i < power)
		{
			res = res * nb;
			i++;
		}
	}	
	return (res);
}
/*
int main()
{
	int i;
	int j;
	scanf("%d %d", &i, &j);
	printf("%d", ft_iterative_power(i, j));
}
*/