/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 11:17:25 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/21 13:09:32 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int c;

	i = 0;
	c = 0;
	if (needle[0] == '\0')
		return (char*)(haystack);
	while (haystack[i])
	{
		j = i;
		c = 0;
		while (haystack[j] == needle[c])
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
