/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 18:10:45 by kkai              #+#    #+#             */
/*   Updated: 2021/04/29 18:12:03 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	i;
	size_t	j;

	i = 0;
	if (s1[i] == '\0' || set[i] == '\0')
		return (ft_strdup(""));
	j = ft_strlen(s1) ;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (j >= 0 && ft_strchr(set, s1[j]))
		j--;
	p = (char *)malloc(sizeof(char) * ((j - i) + 2));
	if (p == 0)
		return (NULL);
	ft_strlcpy(p, &s1[i], (j - i + 2));
	p = '\0';
	return (p);
}
