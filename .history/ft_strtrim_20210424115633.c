/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 18:10:45 by kkai              #+#    #+#             */
/*   Updated: 2021/04/24 11:56:33 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	i;
	size_t	j;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (ft_strchr(set, s1[i]) == 1)
		i++;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[j]) == 1)
		j--;
	p = (char*)malloc(sizeof(char) * ((j - i) + 1))
	if (p == 0)
		return (NULL);
	while (i <= j)
	{
		*p = str[i];
		p++;
		i++;
	}
	*p = '\0';
	return (p);
}
