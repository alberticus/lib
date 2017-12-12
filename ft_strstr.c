/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 12:44:51 by atsai             #+#    #+#             */
/*   Updated: 2017/12/11 21:10:14 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int index;

	index = 0;
	if (little[index] == '\0')
		return ((char*)&big[index]);
	while (big[index])
	{
		if (big[index] == little[0] && !(ft_strncmp(&big[index], little,
			(size_t)ft_strlen((char*)little))))
			return ((char*)&big[index]);
		index++;
	}
	return (0);
}
