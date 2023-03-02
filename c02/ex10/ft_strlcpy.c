/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:37:36 by rsoo              #+#    #+#             */
/*   Updated: 2023/02/15 14:57:18 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;

	x = 0;
	while (src[x] != '\0' && x < size - 1)
	{
		dest[x] = src[x];
		x++;
	}
	if (size > 0)
		dest[x] = '\0';
	return (ft_strlen(src));
}
/*
int main()
{
	char src[6] = "hello";
	char dest[8];

	printf("%u", ft_strlcpy(dest, src, 8));
}
*/
