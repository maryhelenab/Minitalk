/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:44:59 by malbuque          #+#    #+#             */
/*   Updated: 2021/12/04 18:01:02 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_index(char c, const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	s;
	size_t	e;
	char	*dest;

	if (!s1 || !set)
		return (0);
	s = 0;
	while (s1[s] && ft_index(s1[s], set))
		s++;
	e = ft_strlen(s1);
	while (e > s && ft_index(s1[e - 1], set))
		e--;
	dest = (char *)malloc(sizeof(*s1) * (e - s +1));
	if (!dest)
		return (0);
	i = 0;
	while (s < e)
		dest[i++] = s1[s++];
	dest[i] = '\0';
	return (dest);
}
