/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 16:49:03 by atsai             #+#    #+#             */
/*   Updated: 2017/12/04 16:46:43 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d;
	char *s;

	d = (char*)dst;
	s = (char*)src;
	if (s < d)
	{
		s = s + len - 1;
		d = d + len - 1;
		while (len > 0)
		{
			*d-- = *s--;
			len--;
		}
	}
	else
		while (len > 0)
		{
			*d++ = *s++;
			len--;
		}
	return (dst);
}
