#include <libft.h>

char *ft_strstr(const char *haystack, const char *needle)
{
    int i;

    i = 0;
    if ((int)ft_strlen(needle) == 0)
        return ((char *)haystack);
    while (ft_strlen(needle) <= ft_strlen(haystack) && haystack[i++] != '\0')
    {
        if (ft_strncmp(&haystack[i], needle, ft_strlen(needle)) == 0)
            return ((char *)&haystack[i]);
        if (ft_strlen(&haystack[i]) < ft_strlen(needle))
            return (NULL);
    }
    return (NULL);
}
