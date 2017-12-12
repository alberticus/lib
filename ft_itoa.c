/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 19:36:25 by atsai             #+#    #+#             */
/*   Updated: 2017/12/11 21:56:06 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countdigits(int number)
{
	int clone;
	int digits;

	clone = number;
	digits = 0;
	if (clone <= 0)
		digits++;
	while (clone != 0)
	{
		clone = (clone / 10);
		digits++;
	}
	return (digits);
}

static void	process(int number, char *s)
{
	int workingnumber;
	int remainder;
	int index;

	workingnumber = number;
	index = 0;
	if (number < 0)
		workingnumber = number * -1;
	while (workingnumber >= 10 || workingnumber <= -10)
	{
		remainder = workingnumber % 10;
		s[index++] = '0' + remainder;
		workingnumber = workingnumber / 10;
	}
	s[index++] = '0' + workingnumber;
	if (number < 0)
	{
		s[index] = '-';
		index++;
	}
	s[index] = 0;
}

static void	reverse(char *string)
{
	int		index1;
	int		index2;
	int		length;
	char	storage;

	length = 0;
	index1 = 0;
	while (string[length])
		length++;
	length--;
	index2 = length;
	while (index1 < length)
	{
		storage = string[index2];
		string[index2] = string[index1];
		string[index1] = storage;
		index1++;
		index2--;
		if (index2 == (length / 2))
			break ;
	}
}

char		*ft_itoa(int n)
{
	char	*string;
	int		index;

	index = 0;
	if (n == -2147483648)
	{
		string = ft_strdup("-2147483648");
		return (string);
	}
	string = (char*)malloc(sizeof(char) * (countdigits(n)) + 1);
	if (!string)
		return (0);
	process(n, string);
	reverse(string);
	return (string);
}
