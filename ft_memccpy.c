#include <libft.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    char *dstPointer;
    size_t i;

    i = 0;
    dstPointer = dst;
    while (i < n)
    {
        dstPointer[i] = *(unsigned char *)&src[i];
        if (*(unsigned char *)&src[i] == (unsigned char)c)
            return (&dst[i + 1]);
        i++;
    }
    return (NULL);
}
