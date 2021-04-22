/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 02:41:03 by kkai              #+#    #+#             */
/*   Updated: 2021/04/22 16:48:06 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char str[i])
{
	int		i;
	int		result;
	int		flag;

	i = 0;
	result = 0;
	flag = 1;
	// check alphabet
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\r' || str[i] == '\v')
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
