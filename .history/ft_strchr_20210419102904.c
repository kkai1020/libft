const char   *ft_strchar(const char *str, int c)
{
    int i;

    i = 0;
    while (*str)
    {
        if (*str == c)
            return (str);
        i++;
    }
    return (0);
}
