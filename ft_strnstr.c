/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <dhill@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:49:36 by atsai             #+#    #+#             */
/*   Updated: 2017/12/11 21:44:17 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t searchindex;
	size_t littleindex;
	size_t answer;

	searchindex = 0;
	littleindex = 0;
	answer = 0;
	if (little[littleindex] == '\0')
		return ((char*)big);
	while (big[searchindex] != '\0' && searchindex <= len)
	{
		answer = searchindex;
		while (big[searchindex] != '\0' && little[littleindex] != '\0'
				&& big[searchindex] == little[littleindex] &&
				searchindex <= len)
		{
			searchindex++;
			littleindex++;
		}
		if (little[littleindex] == '\0')
			return ((char*)&big[answer]);
		searchindex++;
		littleindex = 0;
	}
	return (0);
}
