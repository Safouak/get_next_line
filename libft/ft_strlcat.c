/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 17:48:25 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/25 13:36:25 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int i;

	i = ft_strlen(dst);
	if (i + 1 > size)
		return (ft_strlen(src) + size);
	ft_strncat(dst, src, size - i - 1);
	return (ft_strlen(src) + i);
}
