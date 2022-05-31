/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:29:25 by malbuque          #+#    #+#             */
/*   Updated: 2022/05/31 19:12:20 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_arg(char c, va_list args)
{
	int		len;

	len = 0;
	if (c == 37)
		len += ft_putchar(37, 1);
	if (c == 'c')
		len += ft_putchar(va_arg(args, int), 1);
	else if (c == 's')
		len += ft_putstr(va_arg(args, const void *));
	else if (c == 'p')
		len += ft_pointer(va_arg(args, unsigned long int));
	if (c == 'd' || c == 'i')
		len += ft_base(va_arg(args, int), "0123456789");
	else if (c == 'u')
		len += ft_base(va_arg(args, unsigned int), "0123456789");
	else if (c == 'x')
		len += ft_base(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		len += ft_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	return (len);
}
