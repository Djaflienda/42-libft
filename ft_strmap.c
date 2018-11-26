#include <libft.h>

char *ft_strmap(char const *s, char (*f)(char))
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
        res[i] = f(s[i]);
        i++;
    }
    return (res);
}