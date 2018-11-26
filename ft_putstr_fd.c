#include <libft.h>

void ft_putstr_fd(char const *s, int fd)
{
    int i;

    i = 0;
    if (!s)
        return ;
    while (s[i] != '\0')
        ft_putchar_fd(s[i++], fd);
}
