/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 13:17:04 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/25 13:17:59 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123 && (
					str[i - 1] < 48 ||
					(str[i - 1] > 59 && str[i - 1] < 65) ||
					(str[i - 1] > 90 && str[i - 1] < 97) ||
					str[i - 1] > 122))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
