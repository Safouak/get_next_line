/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:23:51 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/21 14:24:10 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0 && nb != -2147483648)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (nb >= 0 && nb <= 9)
		ft_putchar_fd('0' + nb, fd);
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}
