#include "libft.h"
#include <string.h>

int	main()
{
	char str[20] = "abcdefghijkl";
	char find[10] = "fghi";

	printf("%s\n", strnstr(str, find, 12));
	return (0);
}
