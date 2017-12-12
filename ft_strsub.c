/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 19:30:44 by atsai             #+#    #+#             */
/*   Updated: 2017/12/11 21:27:25 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*copy;
	unsigned int	index1;
	unsigned int	index2;

	index1 = 0;
	index2 = start;
	copy = (char*)malloc(sizeof(*copy) * (unsigned long)(len + 1));
	if (!copy)
		return (0);
	while (index2 >= start && index2 < (len + (size_t)start))
	{
		copy[index1] = s[index2];
		index1++;
		index2++;
	}
	copy[index1] = '\0';
	return (copy);
}
