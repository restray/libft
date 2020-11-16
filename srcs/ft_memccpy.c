/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelhomm <tbelhomm@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:18:23 by tbelhomm          #+#    #+#             */
/*   Updated: 2020/11/16 16:35:36 by tbelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	*str1;

	str = (unsigned char *)dest;
	str1 = (unsigned char *)src;
	while (n)
	{
		*str = *str1;
		if (*str1 == (unsigned char)c)
		{
			str++;
			return (str);
		}
		str++;
		str1++;
	}
	return (0);
}
