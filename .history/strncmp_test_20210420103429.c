#include "libft.h"
#include <string.h>


int	main()
{
	char str[20] = "abcdefghijkl";
	char find[10] = "de";

	printf("%s\n", strncmp(str, find, 8));

	return (0);
