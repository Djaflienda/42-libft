#include <libft.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const char *s1Pointer;
    const char *s2Pointer;

    s1Pointer = s1;
    s2Pointer = s2;
    i = 0;
    while (i++ < n && s1Pointer[i] == s2Pointer[i])
        ;
    if (i == n)
        return (0);
    return (s1Pointer[i] - s2Pointer[i]);
}
