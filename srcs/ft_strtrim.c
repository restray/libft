/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelhomm <tbelhomm@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:59:10 by tbelhomm          #+#    #+#             */
/*   Updated: 2020/11/19 15:15:31 by tbelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static void	ft_unsetfirstchars(const char *s1, char const *set,
		unsigned int *y, unsigned int set_len)
{
	unsigned int	i;

	while (s1[*y])
	{
		i = 0;
		while (set[i] && s1[*y] != set[i])
			i++;
		if (i == set_len)
			break ;
		*y = *y + 1;
	}
}

static void	ft_fillstr(const char *s1, char *str,
		unsigned int *y, unsigned int *z)
{
	while (s1[*y])
	{
		str[*z] = s1[*y];
		(*z)++;
		(*y)++;
	}
	(*z)--;
}

static void	ft_removeuselesschars(char *str, const char *set,
		unsigned int *z, unsigned int set_len)
{
	unsigned int	i;

	i = 0;
	while (z)
	{
		i = 0;
		while (set[i] && str[*z] != set[i])
			i++;
		if (i < set_len)
			str[*z] = '\0';
		else
			break ;
		(*z)--;
	}
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	y;
	unsigned int	set_len;
	unsigned int	z;

	str = (char *)malloc(ft_strlen(s1) * sizeof(char));
	if (!str)
		return (NULL);
	y = 0;
	z = 0;
	set_len = ft_strlen(set);
	ft_unsetfirstchars(s1, set, &y, set_len);
	if (y >= ft_strlen(s1))
		return (str);
	ft_fillstr(s1, str, &y, &z);
	ft_removeuselesschars(str, set, &z, set_len);
	return (str);
}
