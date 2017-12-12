/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 21:27:43 by atsai             #+#    #+#             */
/*   Updated: 2017/12/11 21:38:16 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*pointer1;
	unsigned char	*pointer2;
	size_t			index;

	pointer1 = (unsigned char *)s1;
	pointer2 = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (pointer1[index] != pointer2[index])
			return (pointer1[index] - pointer2[index]);
		index++;
	}
	return (0);
}
