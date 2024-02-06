/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_num.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 15:36:20 by qvan-ste      #+#    #+#                 */
/*   Updated: 2023/11/13 17:59:25 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	int_len(long n)
{
	if (n < 0)
		n = -n;
	if (n > 9)
		return (1 + int_len(n / 10));
	return (1);
}

static void	ft_putnbr(long n)
{
	char	char_n;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	char_n = n % 10 + '0';
	write(1, &char_n, 1);
}

int	print_num(int n)
{
	ft_putnbr(n);
	return (int_len(n) + (n < 0));
}

int	print_unsigned(long n)
{
	if (n < 0)
		n = UINT_MAX - -n;
	ft_putnbr(n);
	return (int_len(n));
}
