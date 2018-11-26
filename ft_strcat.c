#include <libft.h>

char *ft_strcat(char *s1, const char *s2)
{
    // int i;
    // int j;

    // i = 0;
    // j = ft_strlen(s1);
    // while (s2[++i] != '\0')
    //     s1[++j] = s2[i];
    // s1[j] = '\0';
    // return (s1);
    return (ft_strncat(s1, s2, ft_strlen(s2)));
}
