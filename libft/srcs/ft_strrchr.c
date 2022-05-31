/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 22:02:10 by malbuque          #+#    #+#             */
/*   Updated: 2021/12/04 18:04:09 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*
#include <stdio.h>
int main(void)
{
	char s[] = "tripouille";
	char s2[] = "ltripouiel";
	printf("Teste    1: %s\n",ft_strrchr(s, 't'));
	printf("Original 1: %s\n",strrchr(s, 't'));
	printf("Teste    2: %s\n",ft_strrchr(s, 'l'));
	printf("Original 2: %s\n",strrchr(s, 'l'));
	printf("Teste    3: %s\n",ft_strrchr(s2, 'l'));
	printf("Original 3: %s\n",strrchr(s2, 'l'));
	printf("Teste    4: %s\n",ft_strrchr(s, 't'));
	printf("Original 4: %s\n",strrchr(s, 't'));
	printf("Teste    5: %s\n",ft_strrchr(s, 0));
	printf("Original 5: %s\n",strrchr(s, 0));
	printf("Teste    6: %s\n",ft_strrchr(s, 't' + 256));
	printf("Original 6: %s\n",strrchr(s, 't' + 256));
	printf("Teste    7: %s\n",ft_strrchr("", 'V'));
	printf("Original 7: %s\n",strrchr("", 'V'));
	return (0);
}*/
