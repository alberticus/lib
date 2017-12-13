/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 16:59:21 by atsai             #+#    #+#             */
/*   Updated: 2017/12/12 14:44:55 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int index;

	index = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[index] || s2[index])
	{
		if (s1[index] != s2[index])
			return (0);
		index++;
	}
	if (s1[index] != s2[index])
		return (0);
	return (1);
}
