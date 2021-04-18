char   *ft_strchar(const char *str, int c)
{
    int i;

    i = 0;

    while (str[i] !=  '\0')
    {
        if (str[i] == c)
        return (&str[i]);
        i++;
    }
    return (NULL);
}
