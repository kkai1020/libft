#include <stdio.h>
#include <string.h>

const char    *ft_strchr(const char *str, int c);

int     main()
{
    char test[30] ="abcdefgheiklmn";
    char *p, *n;

    p = strchr(test, 'd');
    printf("%s\n", p);

    n = ft_strchr(test, 'd');
    printf("%s\n", n);
    return(0);
}
