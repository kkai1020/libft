/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 18:10:45 by kkai              #+#    #+#             */
/*   Updated: 2021/04/24 11:21:24 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*set_check(char *s1, char const *set)
{
	while ()
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	i;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (ft_strchr(set, *s1) == 1)
		s1++;


	i = ft_strlen(s1);




}
