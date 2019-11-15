/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 15:40:17 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/18 17:01:05 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*buff;

	buff = (unsigned char*)malloc(sizeof(*buff) * n);
	if (buff == NULL)
		return (dst);
	ft_memcpy(buff, src, n);
	ft_memcpy(dst, buff, n);
	free(buff);
	return (dst);
}
