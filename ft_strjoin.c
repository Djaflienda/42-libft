#include <libft.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    char *concatRes;

    i = 0;
    j = 0;
    if (!s1 || !s2)
        return (NULL);
    concatRes = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!concatRes)
        return (NULL);
    while (j < ft_strlen(s2))
    {
        while (i < ft_strlen(s1))
        {
            concatRes[i] = s1[i];
            i++;
        }
        concatRes[i++] = s2[j++];
    }
    concatRes[i] = '\0';
    return (concatRes);
}

