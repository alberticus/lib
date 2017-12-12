/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 13:29:48 by atsai             #+#    #+#             */
/*   Updated: 2017/12/11 21:08:49 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t index;
	size_t sourcelength;

	index = 0;
	sourcelength = 0;
	while (src[sourcelength] != '\0')
		sourcelength++;
	while (index < len)
	{
		dst[index] = src[index];
		index++;
		while (index > sourcelength && index < len)
		{
			dst[index] = '\0';
			index++;
		}
	}
	return (dst);
}
