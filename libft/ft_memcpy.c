/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 11:09:12 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/13 14:13:49 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			idx;
	char		*cdest;
	const char	*csrc;

	csrc = (const char *)src;
	cdest = (char *)dest;
	idx = 0;
	while (n)
	{
		cdest[idx] = csrc[idx];
		idx++;
		n--;
	}
	return (cdest);
}
