/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:33:02 by malbuque          #+#    #+#             */
/*   Updated: 2021/12/04 18:04:12 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	dst = ft_calloc(len + 1, sizeof(char));
	if (dst == NULL)
		return (NULL);
	if (ft_strlen(s) > start)
	{
		while (i < len && s[i] != 0)
		{
			dst[i] = s[start + i];
			i++;
		}
	}
	dst[i] = 0;
	return (dst);
}
