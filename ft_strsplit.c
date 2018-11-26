#include <libft.h>

char **ft_strsplit(char const *s, char c)
{
    int i;
    int j;
    int k;
    char *res;
    char **resArr;

    i = 0;
    j = 0;
    c = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c)
        i++;
        while (s[i] != c)
        {
            res[j] = s[i];
            j++;
            i++;
        }
        j = 0;
        resArr[k] = res;
        k++;
    }
    return (resArr);
}