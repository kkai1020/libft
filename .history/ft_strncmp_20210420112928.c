/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 00:58:56 by kkai              #+#    #+#             */
/*   Updated: 2021/04/20 11:29:28 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if ( *s1 == '\0' || n == 0 )
		{
			return (0);
		}

	while (s1 == *s2 && n )
	{
		*s1++;
		*s2++;
		n--;
	}
	return (*s1 - *s2);
}
