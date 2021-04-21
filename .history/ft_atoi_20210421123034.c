/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 02:41:03 by kkai              #+#    #+#             */
/*   Updated: 2021/04/21 12:30:34 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		result;
	int		flag;

	i = 0;
	result = 0;
	flag = 1;
	// check alpahbet
	while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\t'
			|| *str == '\r' || *str == '\v')
		str++;

	if (*str == '-')
		flag = -1;
	if (*str == '-' || *str == '+')
		str++;

	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		result = result * 10;
		result += str[i] - '0';
		i++;
	}
	return (result * flag);
}
