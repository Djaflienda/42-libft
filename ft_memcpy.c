#include <libft.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    char *dstPointer;
    const char *srcPointer;

    dstPointer = dst;
    srcPointer = src;
    i = 0;
    while (i < n)
    {
        dstPointer[i] = srcPointer[i];
        i++;
    }
    return (dst);
}
