#include <libft.h>

int ft_atoi(const char *str)
{
    int result;
    int sign;
    
    result = 0;
    sign = 1;
    while (*str == 32 || (*str >= 9 && *str <= 13))
        str++;
    if (*str == 43)
        str++;
    else if (*str == 45)
    {
        sign = -1;
        str++;
    }
    while (*str >= 48 && *str <= 57)
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (result * sign);
}
