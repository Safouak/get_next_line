/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:06:30 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/21 15:06:53 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *str, char c)
{
	int count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}
