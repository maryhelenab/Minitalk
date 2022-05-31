/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:49:23 by malbuque          #+#    #+#             */
/*   Updated: 2021/12/04 18:03:38 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char) c)
			return ((char *)s + i);
		i++;
	}
	if (!c && s[i] == '\0')
		return ((char *)s + i);
	return (NULL);
}

/*#include <stdio.h>
int main(void)
{
	char s[] = "tripouille";

	printf("Teste    1: %s\n",ft_strchr(s, 't'));
	printf("Original 1: %s\n",strchr(s, 't'));
	printf("Teste    2: %s\n",ft_strchr(s, 'l'));
	printf("Original 2: %s\n",strchr(s, 'l'));
	printf("Teste    3: %s\n",ft_strchr(s, 'z'));
	printf("Original 3: %s\n",strchr(s, 'z'));
	printf("Teste    4: %s\n",ft_strchr(s, 0));
	printf("Original 4: %s\n",strchr(s, 0));
	printf("Teste    5: %s\n",ft_strchr(s, 't' + 256));
	printf("Original 5: %s\n",strchr(s, 't' + 256));
	return (0);
}*/
