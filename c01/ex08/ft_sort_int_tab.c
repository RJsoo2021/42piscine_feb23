/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:13:41 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/19 15:30:16 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	j = 1;
	while (j < size)
	{
		i = 0;
		while (i < size - j)
		{
			temp = tab[i + 1];
			if (temp < tab[i])
			{
				tab[i + 1] = tab[i];
				tab[i] = temp;
			}		
			i++;
		}
		j++;
	}
}

/*
int main()
{
	int size;

	size = 4;
	int array[4] = {6, 5, 1, 4};

	int i;

	i = 0;

	ft_sort_int_tab(array, size);
	while (i < size)
	{
		printf("%d \n", array[i]);
		i++;
	}	
}
*/
