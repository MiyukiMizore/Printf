/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:29:00 by mfusil            #+#    #+#             */
/*   Updated: 2022/03/23 11:34:01 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_arg(va_list arg, char str);
int	ft_putchar(char *c);
int	ft_putstr(char *str);
int	ft_putchar1(char c);
int	ft_int_putnbr(int nbr);
int	ft_unsigned_putnbr(unsigned int nbr);
int	ft_puthexa(unsigned int nbr, char str);
int	ft_p_puthexa(unsigned long nbr);

#endif
