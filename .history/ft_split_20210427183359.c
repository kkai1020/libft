/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 18:02:48 by kkai              #+#    #+#             */
/*   Updated: 2021/04/27 18:33:59 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	*array_size(const char *s, char c)
{
	unsigned int	len;

	len = 0;
	while (*s != '\0')
	{
		if (*s != c)
			len++;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	size;
	char			**heap;
	char			**ans;

	if (!s)
		return (NULL);
	size = array_size(s, c);
	heap = (char **)malloc(sizeof(char *) * (size + 1));
	if (!heap)
		return (NULL);
	ans = put_array(s, heap, char);



}
