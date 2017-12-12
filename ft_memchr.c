/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:22:27 by atsai             #+#    #+#             */
/*   Updated: 2017/12/11 21:16:31 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	unsigned char	findthis;
	size_t			index;

	index = 0;
	findthis = (unsigned char)c;
	string = (unsigned char *)s;
	while (index < n)
	{
		if (string[index] == findthis)
		{
			return (string + index);
		}
		index++;
	}
	return (0);
}
