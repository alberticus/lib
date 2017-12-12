/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:03:35 by atsai             #+#    #+#             */
/*   Updated: 2017/12/11 21:39:49 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int index;
	int number;
	int negativefactor;

	index = 0;
	number = 0;
	negativefactor = 1;
	while (str[index] == ' ' || str[index] == '\t' || str[index] == '\r'
			|| str[index] == '\f' || str[index] == '\v' || str[index] == '\n')
	{
		index++;
	}
	if (str[index] == '-')
		negativefactor = (-1);
	if (str[index] == '-' || str[index] == '+')
		index++;
	while (str[index] != '\0' && str[index] >= '0' && str[index] <= '9')
	{
		number = (number * 10);
		number = (number + (str[index] - '0'));
		index++;
	}
	return (number * negativefactor);
}
