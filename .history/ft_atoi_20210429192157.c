/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 02:41:03 by kkai              #+#    #+#             */
/*   Updated: 2021/04/29 19:21:57 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		result;
	int		flag;

	i = 0;
	result = 0;
	flag = 1;
	while (str[i] >= '\t'|| str[i] <= '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag = -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		result = result * 10;
		result += (int)str[i] - '0';
		i++;
	}
	return (result * flag);
}
