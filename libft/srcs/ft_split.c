/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:26:27 by malbuque          #+#    #+#             */
/*   Updated: 2021/12/04 18:03:35 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len_new(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (s[i] != c && !i)
		{
			j++;
			i = 1;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (j + 1);
}

char	*ft_getsplit(char const *s, char c, size_t i)
{
	size_t	e;

	e = i;
	while (s[e] != c && s[e] != 0)
		e++;
	return (ft_substr(s, (unsigned int) i, (e - i)));
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**dest;

	if (!s)
		return (0);
	dest = malloc(sizeof(char *) * len_new(s, c));
	if (!dest)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			dest[j] = ft_getsplit(s, c, i);
			i = i + ft_strlen(dest[j]) - 1;
			j++;
		}
		i++;
	}
	dest[j] = 0;
	return (dest);
}

/*#include <stdio.h>
 int main()
 {
	 //char *str = "JAN,,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC";
	 //char c =  ',';

	 char *str = "  tripouille  42  ";
	 char c =  ' ';

	 printf("len: %zu\n", len_new(str,c));
	 printf("Teste: %s\n", *ft_split(str, c));
	 return(0);
 }*/
