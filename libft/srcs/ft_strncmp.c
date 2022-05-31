/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 22:21:47 by malbuque          #+#    #+#             */
/*   Updated: 2021/12/04 18:04:02 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ((!s1 && !s2) || n == 0)
		return (0);
	while (s1[i] && s2[i] && i < (n - 1))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			break ;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>
int main(void)
{
	printf("Teste    1: %d\n",ft_strncmp("t", "", 0));
	printf("Original 1: %d\n",strncmp("t", "", 0));
	printf("Teste    2: %d\n",ft_strncmp("1234", "1235", 3));
	printf("Original 2: %d\n",strncmp("1234", "1235", 3));
	printf("Teste    3: %d\n",ft_strncmp("1234", "1235", 4));
	printf("Original 3: %d\n",strncmp("1234", "1235", 4));
	printf("Teste    4: %d\n",ft_strncmp("1234", "1235", -1));
	printf("Original 4: %d\n",strncmp("1234", "1235", -1));
	printf("Teste    5: %d\n",ft_strncmp("", "", 42));
	printf("Original 5: %d\n",strncmp("", "", 42));
	printf("Teste    6: %d\n",ft_strncmp("Tripouille", "Tripouille", 42));
	printf("Original 6: %d\n",strncmp("Tripouille", "Tripouille", 42));
	printf("Teste    7: %d\n",ft_strncmp("Tripouille", "tripouille", 42));
	printf("Original 7: %d\n",strncmp("Tripouille", "tripouille", 42));
	printf("Teste    8: %d\n",ft_strncmp("Tripouille", "TriPouille", 42));
	printf("Original 8: %d\n",strncmp("Tripouille", "TriPouille", 42));
	printf("Teste    9: %d\n",ft_strncmp("Tripouille", "TripouillE", 42));
	printf("Original 9: %d\n",strncmp("Tripouille", "TripouillE", 42));
	printf("Teste    10: %d\n",ft_strncmp("Tripouille", "TripouilleX", 42));
	printf("Original 10: %d\n",strncmp("Tripouille", "TripouilleX", 42));
	printf("Teste    11: %d\n",ft_strncmp("Tripouille", "Tripouill", 42));
	printf("Original 11: %d\n",strncmp("Tripouille", "Tripouill", 42));
	printf("Teste    12: %d\n",ft_strncmp("", "1", 0));
	printf("Original 12: %d\n",strncmp("", "1", 0));
	printf("Teste    13: %d\n",ft_strncmp("1", "", 0));
	printf("Original 13: %d\n",strncmp("1", "", 0));
	printf("Teste    14: %d\n",ft_strncmp("", "1", 1));
	printf("Original 14: %d\n",strncmp("", "1", 1));
	printf("Teste    15: %d\n",ft_strncmp("1", "", 1));
	printf("Original 15: %d\n",strncmp("1", "", 1));
	printf("Teste    16: %d\n",ft_strncmp("", "", 1));
	printf("Original 16: %d\n",strncmp("", "", 1));
	return (0);
}*/
