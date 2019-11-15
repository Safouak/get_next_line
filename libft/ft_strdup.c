/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:32:16 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/21 15:11:00 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned char	*ss;
	char			*str;
	int				idx;
	int				len;

	idx = 0;
	len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	ss = (unsigned char*)s;
	str = malloc(sizeof(unsigned char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (idx < len)
	{
		str[idx] = ss[idx];
		idx++;
	}
	str[idx] = '\0';
	return (str);
}
