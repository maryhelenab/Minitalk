/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:37:36 by malbuque          #+#    #+#             */
/*   Updated: 2022/05/31 20:39:25 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <errno.h>
# include <fcntl.h>
# include <string.h>
# include "libft.h"

# define ERROR (0)
# define BUFFER_SIZE 42

char	*get_next_line(int fd);
size_t	ft_strlengnl(const char *s);
char	*ft_strjoingnl(char *s1, char *s2);
void	update(char *buff);
int		find_nl(char *str);

#endif
