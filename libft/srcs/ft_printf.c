/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:20:54 by malbuque          #+#    #+#             */
/*   Updated: 2022/03/05 12:52:34 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	if (!str)
		return (0);
	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == 37)
		{
			i++;
			len += ft_check_arg(str[i], args);
		}
		else
		{
			write(1, &str[i], 1);
			len++;
		}
		i++;
	}
	va_end (args);
	return (len);
}
