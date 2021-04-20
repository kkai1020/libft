/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:12:51 by kkai              #+#    #+#             */
/*   Updated: 2021/04/20 18:43:10 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned char	a;

	p1 = (unsigned char*)dest;
	p2 = (unsigned char*)src;
	a = (unsigned char)c;
	while (n > 0)
	{
		if (p1 == a)
			return ((char*)dest);
		*p1 = *p2;
		p1++;
		p2++;
		n--;
	}
	return (NULL);

}
