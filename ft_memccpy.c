/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 16:20:40 by atsai             #+#    #+#             */
/*   Updated: 2017/12/11 21:16:05 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			index;

	index = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (index < n)
	{
		d[index] = s[index];
		if (s[index] == (unsigned char)c)
			return (&d[index + 1]);
		index++;
	}
	if (index == n)
		return (NULL);
	return (d + index);
}
