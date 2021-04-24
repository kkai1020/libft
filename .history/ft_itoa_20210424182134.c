/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 16:34:58 by kkai              #+#    #+#             */
/*   Updated: 2021/04/24 18:21:34 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	num_len(int num)
{
	int	i;

	i = 0;
	if (num < 0 || num == 0)
		i++;
	while (num)
	{
		num /= 10;
		i++
	}
	return (i);
}



char	*ft_itoa(int n)
{
	char	*p;

	p = (char *)malloc(sizeof(char) * (num_len(n) + 1))

	if (n < 0)
	{
		*p = '-';
		p++;
	}

}
