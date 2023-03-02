/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:08:04 by rsoo              #+#    #+#             */
/*   Updated: 2023/03/02 11:43:22 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include<unistd.h>

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_calc(char *a, char *b, char *c);
int		ft_plus(int a, int b);
int		ft_minus(int a, int b);
int		ft_multiply(int a, int b);
int		ft_divide(int a, int b);
int		ft_modulo(int a, int b);
int		astcmp(char b);

#endif
