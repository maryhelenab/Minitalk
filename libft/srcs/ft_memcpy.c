/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 23:00:28 by malbuque          #+#    #+#             */
/*   Updated: 2021/12/04 18:03:14 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	while (n--)
		((unsigned char *) dst)[n] = ((unsigned char *) src)[n];
	return (dst);
}

/*#include <stdio.h>
int main(void)
{
	char dest[100];
	memset(dest, 'A', 100);
	printf("Teste    1: %s\n", ft_memcpy(dest, "coucou", 0));
	printf("Original 1: %s\n", memcpy(dest, "coucou", 0));
	printf("Teste    2: %s\n", ft_memcpy(dest, "coucou", 10));
	printf("Original 2: %s\n", memcpy(dest, "coucou", 10));
	char src1[50] = "http://www.w3cschool.cc";
   	char dest1[50];
	printf("Teste    3: %s\n", ft_memcpy(dest1, src1, 50));
	printf("Original 3: %s\n", memcpy(dest1, src1, 50));
	char src[] = {0, 0};
	printf("Teste    4: %s\n", ft_memcpy(dest, src, 2));
	printf("Original 4: %s\n", memcpy(dest, src, 2));

	return (0);
}*/
