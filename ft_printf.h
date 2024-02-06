/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 17:49:45 by qvan-ste      #+#    #+#                 */
/*   Updated: 2023/11/13 18:00:33 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <limits.h>

int		hex_len(unsigned long n);
int		print_hex_upper(unsigned int n);
int		print_hex_lower(unsigned int n);
int		print_ptr(uintptr_t ptr);
int		print_char(char c);
int		print_str(char *s);
int		print_num(int n);
int		print_unsigned(long n);
int		print_percent(void);
int		ft_printf(const char *format, ...);

#endif
