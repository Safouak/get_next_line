/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:19:49 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/21 15:10:31 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned char	*str;
	size_t			len;

	len = 0;
	str = (unsigned char *)s;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
