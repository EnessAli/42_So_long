/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermen <egermen@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:53:38 by egermen           #+#    #+#             */
/*   Updated: 2023/11/03 12:24:15 by egermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putptr(unsigned long ptr, int i);
int	ft_putnbr(int number);
int	ft_unsigned(unsigned int w);
int	ft_hex(unsigned int d, char w);
int	ft_printf(const char *str, ...);

#endif
