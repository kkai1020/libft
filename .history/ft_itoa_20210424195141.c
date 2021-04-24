/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 16:34:58 by kkai              #+#    #+#             */
/*   Updated: 2021/04/24 19:51:41 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	num_len(int n)
{
	int	i;

	i = 0;
	if (n < 0 || n == 0)
		i++;
	while (n)
	{
		n /= 10;
		i++
	}
	return (i);
}
static	char	*num_con(int n, char *heap, int len)
{
	char	tmp;
	int		len_tmp;

	len_tmp = len;
	if (n < 0)
	{
		heap[0] = '-';
		n *= -1;
		len--;
	}
	if (n == NULL)
		return (heap);
	while (len)
	{
		tmp = (n % 10) + '0';
		n /= 10;
		heap[len--] = tmp;
	}
	heap[len_tmp] = '\0';
	return (heap);
}

char		*ft_itoa(int n)
{
	char	*heap;
	int		len;

	len = num_len(n)
	heap = (char *)malloc(sizeof(char) * (len + 1));
	if (heap == NULL)
		return (NULL)
	heap = num_con(heap, n, len);
	return (heap);
}
