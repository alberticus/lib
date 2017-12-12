/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 14:31:05 by atsai             #+#    #+#             */
/*   Updated: 2017/12/11 21:04:08 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pointer;
	size_t			index;

	pointer = (unsigned char *)b;
	index = 0;
	while (index < len)
	{
		pointer[index] = c;
		index++;
	}
	return (b);
}
