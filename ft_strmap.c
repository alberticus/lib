/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 16:00:20 by atsai             #+#    #+#             */
/*   Updated: 2017/12/11 21:45:39 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		index;

	index = 0;
	if (!s || !f)
		return (0);
	new = (char*)malloc(sizeof(char) * (unsigned long)ft_strlen(s) + 1);
	if (!new)
		return (0);
	while (s[index] != '\0')
	{
		new[index] = f(s[index]);
		index++;
	}
	new[index] = '\0';
	return (new);
}
