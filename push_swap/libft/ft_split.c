/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:56:48 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/09 12:10:56 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_nb_words(char const *s, char c)
{
	size_t	i;
	size_t	count_word;
	int		toggle;

	i = 0;
	toggle = 0;
	count_word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!toggle && s[i] != c)
				count_word++;
			toggle = 1;
		}
		else
			toggle = 0;
		i++;
	}
	return (count_word);
}

static char	*split_char(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (get_nb_words(s, c) + 1));
	if (!split)
		return (NULL);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = split_char(s, index, i);
			index = -1;
		}
	}
	split[j] = 0;
	return (split);
}
