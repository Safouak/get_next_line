/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:47:06 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/16 13:46:54 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned char	*ps;
	int				idx;

	ps = (unsigned char *)s;
	idx = 0;
	while (n > 0)
	{
		if (ps[idx] == (unsigned char)c)
			return (ps + idx);
		idx++;
		n--;
	}
	return (NULL);
}
