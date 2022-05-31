/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:49:17 by malbuque          #+#    #+#             */
/*   Updated: 2021/12/04 18:03:01 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int num)
{
	long int	n;
	char		*dest;
	size_t		t;

	n = (long int) num;
	t = ft_len(n);
	dest = malloc(sizeof(char) * (t + 1));
	if (!dest)
		return (NULL);
	if (n < 0)
	{
		dest[0] = '-';
		n *= -1;
	}
	else if (n == 0)
		dest [0] = 48;
	dest[t] = '\0';
	while (n > 0)
	{
		dest[--t] = (n - ((n / 10) * 10)) + 48;
		n /= 10;
	}
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	int n = (-1);

	printf("teste: %zu\n", ft_len(n));
	printf("teste: %s\n", ft_itoa(n));
	return (0);
}*/
