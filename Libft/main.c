/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:07:28 by llahaye           #+#    #+#             */
/*   Updated: 2023/10/31 17:42:00 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	//STRLEN TEST
	char	buffer_strlen[] = "Ceci est un test du ft_strlen";
	printf("FT_STRLEN TEST \n%d\n\n", ft_strlen(buffer_strlen));

	//MEMSET TEST
	char	buffer_memset[] = "Ceci est un test du ft_memset";
	printf("FT_MEMSET TEST \n");
	printf("AVANT: %s\n", buffer_memset);
	ft_memset(buffer_memset, '*', 4);
	printf("APRES:  %s\n\n", buffer_memset);

	//BZERO TEST
	char	buffer_bzero[] = "Ceci est un test du ft_bzero";
	printf("FT_BZERO TEST \n");
	printf("AVANT: %s\n", buffer_bzero);
	ft_bzero(buffer_bzero, 4);
	printf("APRES:  %s\n\n", buffer_bzero);

	//MEMCPY TEST
	const char buffer_memcpy_src[50] = "Ceci est un message à copier";
	char buffer_memcpy_dest[50];
	printf("FT_BZERO TEST \n");
	printf("AVANT: %s\n", buffer_memcpy_dest);
	ft_memcpy(buffer_memcpy_dest, buffer_memcpy_src, strlen(buffer_memcpy_src)+1);
	printf("APRES: %s\n", buffer_memcpy_dest);
}
