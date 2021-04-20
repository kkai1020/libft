#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main()
{
	char str[20] = "abcdefg";
	char find[10] = "abcdef";

	printf("%d\n", strncmp(str, find, 8));
	printf("%d\n", ft_strncmp(str, find, 8));


	return (0);
}
