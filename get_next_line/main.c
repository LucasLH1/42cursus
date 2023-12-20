/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:29:23 by llahaye           #+#    #+#             */
/*   Updated: 2023/12/20 11:08:47 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h" // Assurez-vous d'inclure le bon fichier d'en-tête

int main(void)
{
	int fd;
    char *line;

    fd = open("test.txt", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		printf("%s", line);
		if (!line)
			break ;
		free(line);
	}
	close(fd);

	return (EXIT_SUCCESS);
}
