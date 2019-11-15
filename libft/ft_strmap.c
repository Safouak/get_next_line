/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 17:38:09 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/19 17:38:23 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ptr;

	i = 0;
	if (!s)
		return (NULL);
	ptr = ft_strnew(ft_strlen(s));
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = f(s[i]);
		i++;
	}
	return (ptr);
}
