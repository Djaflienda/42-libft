#include <libft.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;

    i = 0;
    if (ft_strlen(needle) == 0)
        return ((char *)haystack);
    while (ft_strlen(needle) <= ft_strlen(haystack) && haystack[i] != '\0')
    {
        if (len - i < ft_strlen(needle))
            return (NULL);
        if (ft_strncmp(&haystack[i], needle, ft_strlen(needle)) == 0)
            return ((char *)&haystack[i]);
        i++;
    }
    return (NULL);
}
