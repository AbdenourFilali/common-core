/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 23:05:46 by abfilali          #+#    #+#             */
/*   Updated: 2025/05/08 03:33:39 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_printdigit(long n);
int	ft_print_uns_int(unsigned int n);
int	ft_print_hex_lower(unsigned int n);
int	ft_print_hex_upper(unsigned int n);
int	ft_print_pointer(void *p);
int	ft_print_hex_ptr(unsigned long long n);
int	ft_print_percent(void);

#endif
