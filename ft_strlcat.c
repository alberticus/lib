/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <dhill@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 12:45:23 by atsai             #+#    #+#             */
/*   Updated: 2017/12/11 20:57:16 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t index;
	size_t dsize;
	size_t ssize;

	index = 0;
	dsize = ft_strlen(dst);
	ssize = ft_strlen(src);
	if (size <= dsize)
		return (size + ssize);
	while (index + dsize < (size - 1))
	{
		dst[index + dsize] = src[index];
		index++;
	}
	dst[index + dsize] = '\0';
	return (ssize + dsize);
}
