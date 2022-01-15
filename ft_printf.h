/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbinary <fbinary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:50:42 by fbinary           #+#    #+#             */
/*   Updated: 2022/01/14 19:27:17 by fbinary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_putchar_fd(char c);
int	ft_putnbr_fd(int n, int fd);
int	ft_putstr_fd(char *s);
int	ft_puthex(unsigned long number, int is_pointer);
int	ft_un_putnbr_fd(unsigned int n, int fd);
int	ft_puthex_up(unsigned long number, int is_pointer);
int	ft_printf(const char *format, ...);

#endif
