#include <stdio.h>
#include <string.h>

char    *ft_strrchr(const char *str, int c);

int     main()
{
    char str[30] ="abcdefgheiklemn";

    printf("%s\n", strrchr(str, 'e'));

    printf("%s\n", ft_strrchr(str, 'e'));
    return(0);
}
