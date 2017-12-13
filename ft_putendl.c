/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 19:21:05 by atsai             #+#    #+#             */
/*   Updated: 2017/12/12 18:59:23 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	int index;

	index = 0;
	if (!s)
		return ;
	while (s[index] != '\0')
	{
		ft_putchar(s[index]);
		index++;
	}
	ft_putchar('\n');
}
