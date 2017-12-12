/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <dhill@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 18:54:23 by atsai             #+#    #+#             */
/*   Updated: 2017/12/11 21:41:03 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t index;

	index = 0;
	while ((s1[index] != '\0' || s2[index] != '\0') && index
			< (n - 1) && s1[index] == s2[index])
		index++;
	return (*(unsigned char*)(s1 + index) - *(unsigned char*)(s2 + index));
}
