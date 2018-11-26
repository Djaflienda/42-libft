#include <libft.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    const char *sPointer;

    sPointer = s;
    i = 0;
    while (i < n)
    {
        if (sPointer[i] == (char)c)
            return ((void *)&sPointer[i]);
        i++;
    }
    return (NULL);
}
