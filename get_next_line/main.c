/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:29:23 by llahaye           #+#    #+#             */
/*   Updated: 2023/12/19 15:12:30 by llahaye          ###   ########.fr       */
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

    fd = open("test", O_RDONLY);
    if (fd == -1)
    {
        perror("Erreur lors de l'ouverture du fichier");
        return (EXIT_FAILURE);
    }

    // Lecture de la première ligne
    line = get_next_line(fd);
    printf("Ligne 1 : %s\n", line);
    free(line); // N'oubliez pas de libérer la mémoire allouée

    close(fd);

    return (EXIT_SUCCESS);
}
