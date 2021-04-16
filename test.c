/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 20:54:42 by kkai              #+#    #+#             */
/*   Updated: 2021/04/16 23:36:44 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);


int	main(void)
{
	printf("isalpha: %d\n", isalpha('d'));
	printf("ft_isalpha: %d\n", ft_isalpha('d'));

	printf("isalpha: %d\n", isalpha('2'));
	printf("ft_isalpha: %d\n", ft_isalpha('2'));

	printf("isdigit: %d\n", isdigit('d'));
	printf("ft_isdigit: %d\n", ft_isdigit('d'));

	printf("isdigit: %d\n", isdigit('2'));
	printf("ft_isdigit: %d\n", ft_isdigit('2'));

	printf("isalnum: %d\n", isalnum('2'));
	printf("ft_isalnum: %d\n", ft_isalnum('2'));

	printf("isalnum: %d\n", isalnum('A'));
	printf("ft_isalnum: %d\n", ft_isalnum('A'));

	printf("isascii: %d\n", isascii('A'));
	printf("ft_isascii: %d\n", ft_isascii('A'));
	return (0);
}
