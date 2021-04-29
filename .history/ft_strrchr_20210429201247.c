/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:50:14 by kkai              #+#    #+#             */
/*   Updated: 2021/04/29 20:12:47 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char   *ft_strrchr(const char *str, int c)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	c1;

	i = ft_strlen(str);
	str1 = (unsigned char *)str;
	c1 = (unsigned char)c;
	while (i >= 0)
	{
		if (str1[i] == c1)
			return ((char*)&str[i]);
		if (i == 0)
			return (NULL);
		i--;
	}
	return (NULL);
}
