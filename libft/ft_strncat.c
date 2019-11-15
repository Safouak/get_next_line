/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 11:49:28 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/18 17:01:26 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t len)
{
	char *cp;

	cp = dest;
	while (*cp != '\0')
		cp++;
	while (len-- > 0 && *src != '\0')
		*cp++ = *src++;
	*cp = '\0';
	return (dest);
}
