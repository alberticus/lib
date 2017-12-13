/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stringreverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:14:41 by atsai             #+#    #+#             */
/*   Updated: 2017/12/12 20:29:39 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stringreverse(char *string)
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
			break;
	}
	return (string);
}
