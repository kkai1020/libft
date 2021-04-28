/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:04:18 by kkai              #+#    #+#             */
/*   Updated: 2021/04/28 12:37:07 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;

	if (s1 == 0 && s2 == 0)
		return (NULL);
	p = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (p == 0)
		return (NULL);
	while (*s1 != 0)
	{
		*p = *s1;
		p++;
		s1++;
	}
	while (*s2 != 0)
	{
		*p = *s2;
		p++;
		s2++;
	}
	*p = '\0';
	return (p);
}
