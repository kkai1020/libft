/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 16:34:58 by kkai              #+#    #+#             */
/*   Updated: 2021/04/24 19:44:35 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		num_len(int num)
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

static	char	*num_con(int num, char *heap, int len)
{
	char	tmp;
	int		len_tmp;

	len_tmp = len;
	if (num < 0)
	{
		heap[0] = '-';
		num *= -1;
		len--;
	}
	if (num == NULL)
		return (heap);
	while (len)
	{
		tmp = (num % 10) + '0';
		num /= 10;
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
