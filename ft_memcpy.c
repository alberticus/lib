/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 15:26:56 by atsai             #+#    #+#             */
/*   Updated: 2017/12/11 21:00:59 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*pointer;
	unsigned char	*sourcepointer;
	size_t			index;

	index = 0;
	pointer = (unsigned char *)dst;
	sourcepointer = (unsigned char *)src;
	while (index < n)
	{
		pointer[index] = sourcepointer[index];
		index++;
	}
	return (dst);
}
