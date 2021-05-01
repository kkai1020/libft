/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 02:40:00 by kkai              #+#    #+#             */
/*   Updated: 2021/05/01 12:47:22 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*ndPtr;

	ndPtr = malloc(sizeof(t_list) * 1);
	if (ndPtr == NULL)
		return NULL;
	ndPtr -> content = content;
	ndPtr -> next = 0;
	return (ndPtr);
}
