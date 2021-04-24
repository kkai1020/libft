/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:40:46 by kkai              #+#    #+#             */
/*   Updated: 2021/04/24 21:40:59 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char*)dest;
	p2 = (unsigned char*)src;
	while (len)
	{
		*p1 = *p2;
		p1++;
		p2++;
		len--;
	}
	return (dest);
}
