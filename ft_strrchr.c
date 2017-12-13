/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <dhill@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 13:30:37 by atsai             #+#    #+#             */
/*   Updated: 2017/12/12 16:51:53 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int index;
	int lastlocation;

	index = 0;
	lastlocation = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
			lastlocation = index;
		index++;
	}
	if (c == '\0' && s[index] == '\0')
		return ((char*)&s[index]);
	else if (lastlocation != 0 || (lastlocation == 0 && s[lastlocation] == c))
		return ((char*)&s[lastlocation]);
	return (0);
}
