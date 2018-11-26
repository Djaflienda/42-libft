#include <libft.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *dstPointer;
    const char *srcPointer;
    size_t i;

    dstPointer = dst;
    srcPointer = src;
    i = 0;
    if (srcPointer < dstPointer)
        while ((int)--len >= 0)
            dstPointer[len] = srcPointer[len];
    else
    {
        while (i < len)
        {
            dstPointer[i] = srcPointer[i];
            i++;
        }
    }
    return (dst);
}
