#include "libft.h"

int		main()
{
	char *s1 = "abcdxxabcxxabc";
	char *s2 = "abc";
	char *ret = ft_strtrim(s1, s2);

	printf ("%c", ret);
	return (0);
}
