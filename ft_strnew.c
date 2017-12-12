/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 20:02:35 by atsai             #+#    #+#             */
/*   Updated: 2017/12/11 21:27:50 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*string;
	size_t	index;

	index = 0;
	string = (char*)malloc(size + 1);
	if (!string)
		return (0);
	while (index <= size)
	{
		string[index] = 0;
		index++;
	}
	return (string);
}
