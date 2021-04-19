#include <stdio.h>
#include <string.h>

const char    *ft_strchr(const char *str, int c);

int     main()
{
    char str[30] ="abcdefgheiklmn";

    printf("%s\n", strchr(str, 'd'));

    printf("%s\n", ft_strchr(test, 'd'));
    return(0);
}
