/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 12:40:37 by kkai              #+#    #+#             */
/*   Updated: 2021/04/21 13:37:55 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (src[i] == NULL)
		return (NULL);
	dest = (char*)malloc(i + 1);
	if (dest == NULL)
		return (NULL);

	while (i >= 0)
	{
		dest[i] = src[i];
		i--;
	}
	dest[i] = '\0';
	return (dest);
}
