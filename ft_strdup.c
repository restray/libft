/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelhomm <tbelhomm@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:27:06 by tbelhomm          #+#    #+#             */
/*   Updated: 2020/11/19 10:35:15 by tbelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	unsigned int	str_size;
	char			*str;
	unsigned int	i;

	str_size = ft_strlen(s);
	str = malloc(str_size * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < str_size)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
