/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:50:11 by malbuque          #+#    #+#             */
/*   Updated: 2022/05/25 21:51:34 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	errors(char *error_msg)
{
	ft_printf("%s\n", error_msg);
}

void	messages(void)
{
	ft_printf("====================== MINI TALK ======================\n");
	ft_printf("Correct Usage : ./client [PID] [MESSAGE TO SEND]\n");
	ft_printf("=======================================================\n");
	exit(0);
}
