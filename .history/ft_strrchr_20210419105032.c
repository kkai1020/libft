/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:50:14 by kkai              #+#    #+#             */
/*   Updated: 2021/04/19 10:50:32 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
