#include "libft.h"
#include <string.h>

int	main()
{
	char str[20] = "abcdefghijkl";
	char find[10] = "defghi";

	printf("%s\n", strnstr(str, find, 7));
	return (0);
}
