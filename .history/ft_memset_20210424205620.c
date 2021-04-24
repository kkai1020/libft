/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:24:26 by kkai              #+#    #+#             */
/*   Updated: 2021/04/24 20:56:20 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char i;
	unsigned char *p;

	i = (unsigned char)c;
	p = s;
	while (n > 0)
	{
		*p = i;
		p++;
		n--;
	}
	return (s);
}
