#include <libft.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    char *dstPointer;
    const unsigned char *srcPointer;
    size_t i;

    i = 0;
    dstPointer = dst;
    srcPointer = src;
    while (i < n)
    {
        if (srcPointer[i] == (unsigned char)c)
            return (&dst[i + 1]);
        dstPointer[i] = srcPointer[i];
    }
    return (NULL);
}
