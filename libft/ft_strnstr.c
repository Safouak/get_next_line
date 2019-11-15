/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 12:04:00 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/21 15:08:57 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	j;
	int		c;

	i = 0;
	c = 0;
	if (needle[0] == '\0')
		return (char*)(haystack);
	while (haystack[i])
	{
		j = i;
		c = 0;
		while (haystack[j] == needle[c] && j < len)
		{
			j++;
			c++;
			if (needle[c] == '\0')
				return (char*)(&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
