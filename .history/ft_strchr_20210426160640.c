/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:43:58 by kkai              #+#    #+#             */
/*   Updated: 2021/04/26 16:06:40 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char   *ft_strchr(const char *str, int c)
{
    size_t  len;
    size_t  i;

    len = ft_strlen(str);
    i = 0;
    while (i <= len)
    {
        if (*str == c)
            return ((char*)str);
        str++;
        i++;
    }
    return (NULL);
}