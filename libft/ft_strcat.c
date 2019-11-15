/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 11:57:02 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/21 13:09:10 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char *pdest;
	char *psrc;

	pdest = dest;
	psrc = (char*)src;
	while (*pdest)
		pdest++;
	while (*psrc)
	{
		*pdest = *psrc;
		pdest++;
		psrc++;
	}
	*pdest = '\0';
	return (dest);
}
