/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 22:23:35 by atsai             #+#    #+#             */
/*   Updated: 2017/12/12 19:25:22 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		copyindex;
	int		originindex;
	char	*copy;

	copyindex = 0;
	originindex = -1;
	if (!s1 || !s2)
		return (0);
	copy = (char*)malloc(sizeof(*copy) * (unsigned long)(ft_strlen(s1) +
			ft_strlen(s2) + 1));
	if (!copy)
		return (0);
	while (s1[++originindex] != '\0')
	{
		copy[copyindex] = s1[originindex];
		copyindex++;
	}
	originindex = -1;
	while (s2[++originindex] != '\0')
	{
		copy[copyindex] = s2[originindex];
		copyindex++;
	}
	copy[copyindex] = '\0';
	return (copy);
}
