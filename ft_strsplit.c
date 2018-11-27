#include <libft.h>

//1. define words count
static int ft_define_words_count(char const *s, char c)
{
    int i;
    int counter;

    i = 0;
    counter = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] != '\0')
            counter++;
        while (s[i] && s[i] != c)
            i++;
    }
    return (counter);
} 

static char			*ft_strndup(const char *s, size_t n)
{
	char			*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char **ft_strsplit(char const *s, char c)
{
    int i;
    int j;
    int k;
    char **res;

    if (!s || !c)
        return (NULL);
    if (!(res = (char **)malloc(sizeof(char *) * (ft_define_words_count(s, c) + 1))))
        return (NULL);
    i = 0;
    k = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        j = i;
        while (s[i] != '\0' && s[i] != c)
            i++;
        if (i > j)
			(res[k] = ft_strndup(s + j, i - j)) && (k++);
	}
	res[k] = NULL;
	return (res);
}
