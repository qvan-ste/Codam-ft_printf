/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_basic.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 15:32:55 by qvan-ste      #+#    #+#                 */
/*   Updated: 2023/11/13 18:01:26 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static size_t	ft_strlen(const char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_str(char *s)
{
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}

int	print_percent(void)
{
	write(1, "%", 1);
	return (1);
}
