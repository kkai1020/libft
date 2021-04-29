/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:35:53 by kkai              #+#    #+#             */
/*   Updated: 2021/04/30 05:56:44 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;

	if (*str == 0)
		return (NULL);
	size = ft_strlen(to_find);
	i = -1;
	j = 0;
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[++i + j] && len >= size)
	{
		len--;
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)&str[i]);
		}
		if (str[i + j] == '\0')
			break ;
	}
	return (NULL);
}
