/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:15:38 by malbuque          #+#    #+#             */
/*   Updated: 2021/12/04 18:03:49 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	if (!dst && !src)
		return (0);
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (n <= dst_size)
		return (src_size + n);
	i = dst_size;
	while (src[i - dst_size] != '\0' && i < n - 1)
	{
		dst[i] = src[i - dst_size];
		i++;
	}
	dst[i] = '\0';
	return (dst_size + src_size);
}
