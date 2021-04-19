#include "libft.h"
#include <string.h>

const char	*ft_strnstr(const char *str, const char *to_find, size_t len);

int	main()
{
	char str[20] = "abcdefghijkl";
	char find[10] = "de";

	printf("%s\n", strnstr(str, find, 8));
	printf("%s\n", ft_strnstr(str, find, 8));

	return (0);
}
