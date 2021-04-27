/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 18:02:48 by kkai              #+#    #+#             */
/*   Updated: 2021/04/27 19:00:11 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	*array_size(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s != '\0')
	{
		if (*s != c)
			len++;
		s++;
	}
	return (len);
}
static char	**set_array(const char *s, char **heap, char c)
{
	int

	while (s[i] != '\0')
	{

	}
}

char	**ft_split(char const *s, char c)
{
	int		size;
	char	**heap;
	char	**ans;

	if (!s)
		return (NULL);
	size = array_size(s, c);
	heap = (char **)malloc(sizeof(char *) * (size + 1));
	if (!heap)
		return (NULL);
	ans = set_array(s, heap, c);



}
