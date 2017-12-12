/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 19:37:15 by atsai             #+#    #+#             */
/*   Updated: 2017/12/11 21:28:12 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*memory;
	size_t	index;

	index = 0;
	memory = malloc(size);
	if (memory == NULL)
		return (NULL);
	while (index < size)
	{
		memory[index] = (0);
		index++;
	}
	index = 0;
	return (memory);
}
