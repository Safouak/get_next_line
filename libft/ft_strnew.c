/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 17:30:52 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/19 17:30:58 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *ptr;

	ptr = (char*)malloc((sizeof(char) * size) + 1);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, '\0', size + 1);
	return (ptr);
}
