/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 23:09:50 by atsai             #+#    #+#             */
/*   Updated: 2017/12/12 14:59:35 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countparts(char const *string, char delimiter)
{
	int		count;
	int		flag;

	flag = 0;
	count = 0;
	while (*string)
	{
		if (flag == 1 && *string == delimiter)
			flag = 0;
		if (flag == 0 && *string != delimiter)
		{
			flag = 1;
			count++;
		}
		string++;
	}
	return (count);
}

static int	wordcharactercounter(char const *string, char delimiter)
{
	int		length;

	length = 0;
	while (*string != delimiter && *string)
	{
		length++;
		string++;
	}
	return (length);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		wordcount;
	int		index;

	if (!s)
		return (0);
	index = 0;
	wordcount = countparts(s, c);
	array = (char**)malloc(sizeof(*array) * (countparts(s, c) + 1));
	if (!array)
		return (0);
	while (wordcount--)
	{
		while (*s == c && *s)
			s++;
		array[index] = ft_strsub((const char*)s, 0, wordcharactercounter(s, c));
		if (!array[index])
			return (0);
		s = s + wordcharactercounter(s, c);
		index++;
	}
	array[index] = NULL;
	return (array);
}
