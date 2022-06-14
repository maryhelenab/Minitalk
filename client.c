/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:43:14 by malbuque          #+#    #+#             */
/*   Updated: 2022/06/14 19:49:54 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	action(int sig)
{
	if (sig == SIGUSR1)
	{
		write(STDOUT_FILENO, "Received!", 9);
		write(STDOUT_FILENO, "\n", 1);
		exit(-1);
	}
}

int	con_pid(char *pid)
{
	int	ip;
	int	i;
	int	p;

	p = 1;
	i = 0;
	ip = 0;
	while (pid[i])
		i++;
	i--;
	while (i >= 0)
	{
		ip += (pid[i] - '0') * p;
		p *= 10;
		i--;
	}
	return (ip);
}

static void	send_c(pid_t ip, char c)
{
	int	i;

	i = -1;
	while (++i < 8)
	{
		kill(ip, ((c >> i & 1) + SIGUSR1));
		usleep(100);
	}
}

void	message(pid_t ip, char *message)
{
	int	index;

	index = 0;
	while (message[index])
	{
		send_c(ip, message[index]);
		index++;
	}
	if (message[index] == '\0')
		send_c(ip, message[index]);
}

int	main(int argc, char **argv)
{
	pid_t	ip;

	if (argc != 3)
		return (0);
	signal(SIGUSR1, action);
	ip = con_pid(argv[1]);
	message(ip, argv[2]);
	while (1)
		pause();
	return (0);
}
