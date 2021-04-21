/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:58:21 by kkai              #+#    #+#             */
/*   Updated: 2021/04/21 09:59:20 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*p1;
	char	*p2;

	p1 = (char*)dest;
	p2 = (char*)src;
	if (p1 == p2)
		return (dest);
	if (p1 < p2 && p1 < p2 + n)
	{
		while (n > 0)
		{
			*p1 = *p2;
			p1++;
			p2++;
			n--;
		}
	}
	else
	{
		p1 += n - 1;
		p2 += n - 1;
		while(n)
		{
			*p1 = *p2;
			p1--;
			p2--;
			n--;
		}
		return (s1);
	}





}
