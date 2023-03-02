/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:28:19 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/22 11:06:23 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
int main()
{
	int min;
	int max;
	int i;
	int size;
	int *array;

	i = 0;
	scanf("%d %d", &min, &max);

	size = max - min;

	array = ft_range(min, max);

	while (i < size)
	{
		printf("%d\n", array[i]);
		i++;
	}
}
*/