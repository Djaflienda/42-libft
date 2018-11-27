#include <libft.h>

static size_t ft_intlen(int n)
{
    size_t i;
    
    i = 1;
    while (n /= 10)
        i++;
    return (i);
}

char *ft_itoa(int n)
{
    char *res;
    int reslen;
    unsigned int ncopy;

    ncopy = n;
    if (n >= 0)
        reslen = ft_intlen(n);
    else
    {
        ncopy = -n;
        reslen = ft_intlen(n) + 1;
    }
    if (!(res = ft_strnew(reslen)))
        return (NULL);
    while (reslen >= 1)
    {
        res[reslen-- - 1] = ncopy % 10 + '0';
        ncopy /= 10;
    }
    if (n < 0)
        res[0] = '-';
    return (res);
}
