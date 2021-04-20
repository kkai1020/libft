/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:24:26 by kkai              #+#    #+#             */
/*   Updated: 2021/04/20 17:22:06 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char i;
	unsigned char *p;

	i = (unsigned char)c;
	p = (unsigned char*)s;
	while (n > 0)
	{
		*p = i;
		p++;
		n--;
	}
	return (s);
}
