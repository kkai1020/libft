#include <stdio.h>
#include <string.h>

int     main()
{
    char test[30] ="abcdefgheiklmn";
    printf("%s\n", strchr(test, 'd'));
    printf("%d\n", ft_strchr(test, 'd'));
    return(0);
}
