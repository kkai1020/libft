/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:43:58 by kkai              #+#    #+#             */
/*   Updated: 2021/04/19 10:44:12 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

const char   *ft_strchr(const char *str, int c)
{
    while (*str)
    {
        if (*str == c)
            return (str);
        str++;
    }
    return (NULL);
}