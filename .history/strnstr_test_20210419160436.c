#include "libft.h"

int	main()
{
	char str[20] = "abcdefghijkl";
	char find[10] = "defghi";

	char n = strnstr(str, find, 4);

	printf("%d\n", n);
	return (0);
}
