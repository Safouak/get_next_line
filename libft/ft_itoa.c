/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 10:08:46 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/21 12:41:26 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(int nbr)
{
	size_t		idx;

	idx = 1;
	while (nbr /= 10)
		idx++;
	return (idx);
}

char			*ft_itoa(int n)
{
	char			*tab;
	size_t			len;
	unsigned int	cpy;

	len = intlen(n);
	cpy = n;
	if (n < 0)
	{
		cpy = -n;
		len++;
	}
	if (!(tab = ft_strnew(len)))
		return (NULL);
	tab[--len] = cpy % 10 + '0';
	while (cpy /= 10)
		tab[--len] = cpy % 10 + '0';
	if (n < 0)
		tab[0] = '-';
	return (tab);
}
