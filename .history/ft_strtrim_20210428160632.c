/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 18:10:45 by kkai              #+#    #+#             */
/*   Updated: 2021/04/28 16:06:32 by kkai             ###   ########.fr       */
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
		return (ft_strdup((char*)s1));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (j >= 0 && ft_strchr(set, s1[j]))
		j--;
	p = (char *)malloc(sizeof(char) * ((j - i) + 1));
	if (p == 0)
		return (NULL);
	ft_strlcpy(p, s1[i], (j - i + 1));
	return (p);
}
