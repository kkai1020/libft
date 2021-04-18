char*   strchar(const char *str, int c)
{
    size_t  i;
    size_t  *p;

    i = 0;
    p = &src;

    while (str[i] !=  '\0')
    {
        if (str[i] == c)
        return (*p);
        i++;
    }
    return (NULL);
}
