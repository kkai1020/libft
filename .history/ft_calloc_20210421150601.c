/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:55:51 by kkai              #+#    #+#             */
/*   Updated: 2021/04/21 15:06:01 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t number, size_t size)
{
	void	*p;
	size_t	heap;

	heap = number * size;
	if (heap == NULL)
		p = malloc(1);
	else
		p = malloc(heap);
	if (p == NULL)


}
