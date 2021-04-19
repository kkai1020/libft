/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:35:53 by kkai              #+#    #+#             */
/*   Updated: 2021/04/20 00:44:46 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] < len)
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
