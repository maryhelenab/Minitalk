/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 23:20:48 by malbuque          #+#    #+#             */
/*   Updated: 2021/12/04 18:03:30 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;
	char		c;

	if (fd < 0)
		return ;
	nb = (long int)n;
	if (n < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr_fd((nb / 10), fd);
	c = nb - ((nb / 10) * 10) + 48;
	write(fd, &c, 1);
}
