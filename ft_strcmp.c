/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 12:49:59 by atsai             #+#    #+#             */
/*   Updated: 2017/12/05 13:07:55 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int index;

	index = 0;
	while ((s1[index] != '\0' || s2[index] != '\0') && s1[index] == s2[index])
		index++;
	return (*(unsigned char*)(s1 + index) - *(unsigned char*)(s2 + index));
}
