#include "libft.h"
#include <string.h>


int	main()
{
	char str[20] = "abcde";
	char find[10] = "abcdef";

	printf("%d\n", strncmp(str, find, 8));

	return (0);
}
