/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 11:02:30 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/18 11:16:43 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int idx;

	idx = ft_strlen(s);
	while (idx > 0 && s[idx] != (char)c)
		idx--;
	if (s[idx] == (char)c)
		return ((char *)&s[idx]);
	return (NULL);
}
