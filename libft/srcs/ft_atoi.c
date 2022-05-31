/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:51:21 by malbuque          #+#    #+#             */
/*   Updated: 2021/12/04 18:02:34 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	t;
	int	resulte;

	i = 0;
	t = 1;
	resulte = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] != '\0' && (str[i] == '-' || str[i] == '+' ))
	{
		if (str[i] == '-')
			t *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (i > 18)
			return ((t == -1) - 1);
		resulte = (resulte * 10) + (str[i] - 48);
		i++;
	}
	return (resulte * t);
}
