#include <stdio.h>
#include <string.h>

const char    *ft_strchr(const char *str, int c);

int     main()
{
    char str[30] ="abcdefgheiklmn";

    printf("%s\n", strchr(str, 'd'));

    printf("%c\n", *ft_strchr(str, 'd'));
    return(0);
}