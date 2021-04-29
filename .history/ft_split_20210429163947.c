/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 18:02:48 by kkai              #+#    #+#             */
/*   Updated: 2021/04/29 16:39:47 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	array_size(const char *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			len++;
			while (s[i] && s[i] != c)
				i++;
		}
		i++;
	}
	//printf("%zu \n", len);
	return (len);
}

static int	s_size(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

static char	**heap_free(char **heap)
{
	int	i;

	i = 0;
	while (heap[i] != NULL)
	{
		heap[i] = NULL;
		free(heap[i]);
		i++;
	}
	return (NULL);
}
static char	**set_array(const char *s, char **heap, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		j = 0;
		if (s[i] == c)
			i++;
		else
		{
			j = s_size(&s[i], c);
			heap[k] = (char *)malloc(sizeof(char) * (j + 1));
			if (!heap[k])
				return (heap_free(heap));
			ft_strlcpy(heap[k], &s[i], j + 1);
			i += j;
			k++;
		}
	}
	return (heap);
}

char	**ft_split(char const *s, char c)
{
	size_t	size;
	char	**heap;
	char	**ans;

	if (!s)
		return (NULL);
	size = array_size(s, c);
	heap = (char **)malloc(sizeof(char *) * (size + 1));
	if (!heap)
		return (NULL);
	ans = set_array(s, heap, c);
	if (!ans)
		free(heap);
	return (ans);
}
/*int	main()
{
	char *s = "     split       this for   me      !       ";
	char **result = ft_split(s, ' ');
	while (*result)
	{
		printf ("%s\n", *result);
		*result++;
	}
	return (0);
}*/
