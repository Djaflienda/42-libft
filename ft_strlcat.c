#include <libft.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    int j;

    i = 0;
    j = 0;
    if(dstsize < ft_strlen(dst) + 1)
        return (ft_strlen(src) + dstsize);
    if (dstsize > ft_strlen(dst) + 1)
    {
        while (i < dstsize - 1)
        {
            dst[i] = src[j];
            i++;
            j++;
        }
        dst[i] = '\0';
    }
    return (ft_strlen(dst) + ft_strlen(src));
}
