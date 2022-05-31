/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 15:54:42 by maryhelen         #+#    #+#             */
/*   Updated: 2022/03/05 13:29:33 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const void *str)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *) str;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (temp[i])
	{
		write(1, &temp[i], 1);
		i++;
	}	
	return (i);
}
