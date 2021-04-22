/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:38:49 by kkai              #+#    #+#             */
/*   Updated: 2021/04/22 16:36:54 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = 0;
	j = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (size <= i)
		return (size + j);
	while (n < size - i - 1 && src[n] != '\0')
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	return (i + j);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	s_size;


	i = 0;
	if (s == 0)
		return (NULL);
	s_size = ft_strlen(s);
	if (start >= s_size || len == 0)
		return (ft_strdup(""));

	p = (char*)malloc(sizeof(char) * (len + 1));
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
