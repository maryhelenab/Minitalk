/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:09:41 by malbuque          #+#    #+#             */
/*   Updated: 2021/12/04 18:03:19 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
int	main(void)
{
	char	tab[100];
	memset (tab, 0, 100);

	printf("Teste    1: %s\n", ft_memset(tab, 'A', 0));
	printf("Original 1: %s\n", memset(tab, 'A', 0));
	printf("Teste    2: %s\n", ft_memset(tab, 'A', 42));
	printf("Original 2: %s\n", memset(tab, 'A', 42));
	printf("Teste    3: %s\n", ft_memset(tab, 'y', 10));
	printf("Original 3: %s\n", memset(tab, 'y', 10));
	return (0);
}*/
