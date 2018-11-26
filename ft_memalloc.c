#include <libft.h>

void *ft_memalloc(size_t size)
{
    void *mem;

    mem = malloc(sizeof(char) * size);
    if (!mem)
        return (NULL);
    ft_memset(mem, 0, size);
    return (mem);
}
