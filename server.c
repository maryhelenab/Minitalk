/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:48:06 by malbuque          #+#    #+#             */
/*   Updated: 2022/06/14 19:51:30 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	action(int sig, siginfo_t *info, void *context)
{
	static unsigned char	c = 0;
	static int				i = 0;

	(void)context;
	if (sig == SIGINT)
	{
		write(STDOUT_FILENO, "Until the next interaction\n", 28);
		exit(-1);
	}
	if (i < 9)
		c = ((sig - 30) << i++) | c;
	if (i == 8)
	{
		i = 0;
		write(STDOUT_FILENO, &c, 1);
		if (!c)
		{
			write(STDOUT_FILENO, "\n", 1);
			kill(info->si_pid, SIGUSR1);
			return ;
			usleep(1000);
		}
		c = 0;
	}
}

int	main(void)
{
	pid_t				ip;
	struct sigaction	signal_action;

	signal_action.sa_flags = SA_SIGINFO;
	signal_action.sa_sigaction = action;
	sigaction(SIGINT, &signal_action, NULL);
	sigaction(SIGUSR1, &signal_action, NULL);
	sigaction(SIGUSR2, &signal_action, NULL);
	ip = getpid();
	ft_printf("PID: %d\n", ip);
	while (1)
		pause();
	return (0);
}
