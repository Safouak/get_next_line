/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:16:55 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/15 15:36:18 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*cs;
	size_t	idx;

	cs = (char *)s;
	idx = 0;
	while (idx < n)
	{
		cs[idx] = c;
		idx++;
	}
	return (s);
}
