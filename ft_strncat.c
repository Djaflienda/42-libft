#include <libft.h>

char *ft_strncat(char *s1, const char *s2, size_t n)
{
    int i;
    int j;

    i = 0;
    j = ft_strlen(s1);
    while (s2[i] != '\0' && i++ < (int)n)
            s1[++j] = s2[i];   
    s1[j] = '\0';
    return (s1);
}
