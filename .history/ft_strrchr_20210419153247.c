/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:50:14 by kkai              #+#    #+#             */
/*   Updated: 2021/04/19 15:32:47 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

const char   *ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
    while (i >= 0)
    {
        if (str[i] == c)
            return (&str[i]);
        i--;
    }
    return (NULL);
}
