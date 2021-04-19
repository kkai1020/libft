/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:35:53 by kkai              #+#    #+#             */
/*   Updated: 2021/04/19 22:53:56 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *str, const char *to_find, size_t len)
{
    int i;
    int j;
	size_t	len;

    i = 0;
    j = 0;
    if(to_find[j] == '\0')
        return str;
    while(str[i])
    {
        j = 0;
        while(str[i + j] == to_find[j] && str[i + j])
        {
            j++;
            if(to_find[j] == '\0')
                return &str[i];
        }
        i++;
    }
    return NULL;
}
