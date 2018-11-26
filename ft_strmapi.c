#include <libft.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *res;

    if (!s || !f)
        return (NULL);
    res = ft_strnew(ft_strlen(s));
    if (!res)
        return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        res[i] = f(i, s[i]);
        i++;
    }
    return (res);
}