/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 10:57:59 by kkai              #+#    #+#             */
/*   Updated: 2021/04/27 23:52:29 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char*)s1;
	p2 = (unsigned char*)s2;

	if (n == 0 )
		return (0);
	else
	{
		while (n >= 0)
		{
			p1++;
			p2++;
			n--;
		}
		return (*p1 - *p2);
	}
}
