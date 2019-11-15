/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 13:17:34 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/21 13:09:56 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		idx;

	idx = 0;
	while (s[idx] != '\0' && s[idx] != (char)c)
		idx++;
	if (s[idx] == (char)c)
		return ((char *)&s[idx]);
	return (NULL);
}
