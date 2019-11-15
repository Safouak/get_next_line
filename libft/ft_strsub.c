/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 17:47:10 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/19 17:47:13 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*t;

	i = 0;
	if (!s)
		return (NULL);
	t = ft_strnew(len);
	if (!t)
		return (NULL);
	while (s[start] && len)
	{
		t[i] = s[start];
		start++;
		len--;
		i++;
	}
	return (t);
}
