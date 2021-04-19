#include "libft.h"
#include <string.h>
char	*ft_strnstr(const char *str, const char *to_find, size_t len);

int	main()
{
	char str[20] = "abcdefghijkl";
	char find[10] = "fgi";

	printf("%s\n", strnstr(str, find, 12));
	printf("%s\n", ft_strnstr(str, find, 12));

	return (0);
}
