/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:55:51 by kkai              #+#    #+#             */
/*   Updated: 2021/04/29 19:41:34 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*p;
	size_t	heap;

	heap = number * size;
	if (heap == 0)
		p = malloc(1);
	else
		p = malloc(heap);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, number * size);
	return (p);
}
