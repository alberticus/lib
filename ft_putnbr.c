/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 18:23:25 by atsai             #+#    #+#             */
/*   Updated: 2017/12/11 21:47:53 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		process(int n)
{
	if (n >= 10 || n <= -10)
	{
		process(n / 10);
		process(n % 10);
	}
	else
		ft_putchar((n >= 0) ? n + '0' : -n + '0');
}

void			ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar('-');
	process(n);
}
