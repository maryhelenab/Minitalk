/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:48:25 by malbuque          #+#    #+#             */
/*   Updated: 2022/06/14 19:09:34 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "libft/includes/libft.h"
# include "libft/includes/ft_printf.h"
# include <stdbool.h>
# include <signal.h>
# include <zconf.h>

# define TRUE 1
# define FALSE 0

void	errors(char *error_msg);
void	messages(void);

#endif
