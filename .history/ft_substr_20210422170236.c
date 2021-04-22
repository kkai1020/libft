/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:38:49 by kkai              #+#    #+#             */
/*   Updated: 2021/04/22 17:02:36 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	s_size;
	size_t	i;

	i = 0;
	if (s == 0)
		return (NULL);
	s_size = ft_strlen(s);
	if (start >= s_size || len == 0)
		return (ft_strdup(""));
	if (len > s_size - start)
		len = s_size - start;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == 0)
		return (NULL);
	while (len > 0)
	{
		p[i] = s[start];
		i++;
		start++;
		len--;
	}
	p[i] = '\0';
	return (p);
}
