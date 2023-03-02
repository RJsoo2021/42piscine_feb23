/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:08:02 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/22 11:03:30 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	totalstrlen(int size, char **strs, char *sep)
{
	int	totstrlen;
	int	j;
	int	k;

	j = 0;
	totstrlen = 0;
	while (j < size)
	{
		k = 0;
		while (strs[j][k] != '\0')
		{
			k++;
			totstrlen++;
		}
		j++;
	}
	j = 0;
	while (sep[j])
		j++;
	return (totstrlen + j * (size - 1));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	dest = malloc(totalstrlen(size, strs, sep) + 1);
	if (size < 1)
		return (dest);
	while (j < size)
	{
		k = 0;
		while (strs[j][k] != '\0')
			dest[i++] = strs[j][k++];
		k = 0;
		while (sep[k] && j != size - 1)
			dest[i++] = sep[k++];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	int size;

	size = 3;
	char **array = malloc(size * sizeof(char*));
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		array[i] = malloc(5);
		while (j < 4)
		{
			array[i][j] = 'w' + j;
			j++;
		}
		i++;
	}
	printf("%d", totalstrlen(size, array, " "));
	printf("%s", ft_strjoin(size, array, " "));
}
*/