/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replacecharacter.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:10:31 by atsai             #+#    #+#             */
/*   Updated: 2017/12/12 20:35:58 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_replacecharacter(char *string, char replacethis, char withthis)
{
	int index;

	index = 0;
	while (string[index])
	{
		if (string[index] == replacethis)
			string[index] = withthis;
		index++;
	}
}
