/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 22:59:49 by maryhelen         #+#    #+#             */
/*   Updated: 2022/03/05 12:54:38 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long int nbr)
{
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 0;
	write(1, "0x", 2);
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (3);
	}
	i += 2;
	if (nbr >= (unsigned long int)ft_strlen(base))
		i += ft_base(nbr / ft_strlen(base), base);
	i += write(1, &base[nbr % ft_strlen(base)], 1);
	return (i);
}
