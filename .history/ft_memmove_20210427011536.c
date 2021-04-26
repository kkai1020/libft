/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:58:21 by kkai              #+#    #+#             */
/*   Updated: 2021/04/27 01:15:36 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest1;
	char	*src2;

	dest1 = (char*)dest;
	src2 = (char*)src;
	if (dest1 == src2)
		return (dest);
	if (dest1 < src2 && dest1 < src2 + n)
	{
		while (n)
		{
			*dest1 = *src2;
			dest1++;
			src2++;
			n--;
		}
	}
	else
	{
		dest1 += n - 1;
		src2 += n - 1;
		while(n)
		{
			*dest1 = *src2c2;
			dest1--;
			src2c2--;
			n--;
		}
	}
	return (dest1);
}
