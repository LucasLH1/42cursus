/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:59:42 by llahaye           #+#    #+#             */
/*   Updated: 2023/12/11 16:37:46 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
#include <stdio.h>

void sig_handler(int signum)
{
  printf("\nSignal handler function called %d\n", signum);
}

int main(void)
{
   signal(SIGINT, sig_handler);
   while (1)
   {
		printf("PID : %d\n", getpid());
		sleep(1);
   }
   return (0);
}
