/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 22:45:21 by atsai             #+#    #+#             */
/*   Updated: 2017/12/11 21:38:48 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	findstart(const char *string)
{
	int index;

	index = 0;
	while (string[index] == ' ' || string[index] == '\n' ||
			string[index] == '\t')
		index++;
	if (string[index] == '\0')
		return (0);
	return (index);
}

static int	findend(const char *string)
{
	int index;

	index = 0;
	while (string[index] != '\0')
		index++;
	index--;
	while (string[index] == ' ' || string[index] == '\n' ||
			string[index] == '\t')
		index--;
	return (index);
}

char		*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	int		length;
	char	*newstring;
	int		index;

	index = 0;
	start = findstart(s);
	end = findend(s);
	length = ((end + 1) - start);
	newstring = (char*)malloc(sizeof(char) * length + 1);
	if (!newstring)
		return (0);
	while (index < length)
	{
		newstring[index] = s[index + start];
		index++;
	}
	newstring[index] = '\0';
	return (newstring);
}
