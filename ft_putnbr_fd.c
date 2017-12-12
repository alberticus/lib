/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsai <atsai@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 19:17:45 by atsai             #+#    #+#             */
/*   Updated: 2017/12/11 21:50:09 by atsai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fprocess(int n, int fd)
{
	if (n >= 10 || n <= -10)
	{
		fprocess(n / 10, fd);
		fprocess(n % 10, fd);
	}
	else
		ft_putchar_fd(((n >= 0) ? n + '0' : -n + '0'), fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', n);
	fprocess(n, fd);
}
