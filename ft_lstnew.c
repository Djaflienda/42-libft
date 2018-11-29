#include <libft.h>

t_list *ft_lstnew(void const *content, size_t content_size)
{
    t_list *t;

    t = (t_list *)malloc(sizeof(*t));
    if (!t)
        return (NULL);
    if (!content)
    {
        t->content = NULL;
        t->content_size = 0;
    }
    else
    {
        t->content = malloc(sizeof(content_size));
        if (!t->content)
            return (NULL);
        ft_memcpy(t->content, content, content_size);
        t->content_size = content_size;
    }
    t->next = NULL;
    return (t);
}