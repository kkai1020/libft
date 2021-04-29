/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:50:14 by kkai              #+#    #+#             */
/*   Updated: 2021/04/30 03:08:26 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	c1;
	unsigned char	*ptr;

	str1 = (unsigned char *)str;
	c1 = (unsigned char)c;
	ptr = NULL;
	i = 0;
	while (str[i])
	{
		if (str1[i] == c1)
			ptr = &str[i];
		i++;
	}
	return (ptr);
}
