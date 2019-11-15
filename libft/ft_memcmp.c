/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:52:08 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/18 16:04:04 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;
	int				result;
	int				idx;

	idx = 0;
	result = 0;
	ps1 = (unsigned char*)s1;
	ps2 = (unsigned char*)s2;
	while (n > 0)
	{
		if (ps1[idx] != ps2[idx])
			return (ps1[idx] - ps2[idx]);
		idx++;
		n--;
	}
	return (0);
}
