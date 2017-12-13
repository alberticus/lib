/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 19:05:14 by atsai             #+#    #+#             */
/*   Updated: 2017/12/12 14:45:56 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t index;

	index = 0;
	if (!s1 || !s2)
		return (0);
	while ((s1[index] || s2[index]) && index < n)
	{
		if (s1[index] != s2[index])
			return (0);
		index++;
	}
	return (1);
}
