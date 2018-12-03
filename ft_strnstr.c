/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:57:25 by kschroed          #+#    #+#             */
/*   Updated: 2018/11/30 17:58:07 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
//    size_t i;
//
//    i = 0;
//    if (ft_strlen(needle) == 0 || haystack == needle)
//        return ((char *)haystack);
//    if (ft_strlen(haystack) == ft_strlen(needle))
//        return (ft_strcmp(haystack, needle) == 0 ? (char *)&haystack[i] : NULL);
//    while (ft_strlen(needle) <= ft_strlen(haystack) && haystack[i] != '\0')
//    {
//        if (len - i < ft_strlen(needle))
//            return (NULL);
//        if (ft_strncmp(&haystack[i], needle, ft_strlen(needle) - 1) == 0)
//            return ((char *)&haystack[i]);
//        i++;
//    }
//    return (NULL);
    
    size_t j;
    size_t index;
    
    if (ft_strlen(needle) == 0)
        return ((char *)haystack);
    index = 0;
    while (*haystack && index < len)
    {
        j = 0;
        if (*haystack == needle[j])
        {
            while (needle[j] && needle[j] == *(haystack + j)
                   && index + j < len)
                j++;
            if (needle[j] == '\0')
                return ((char *)haystack);
        }
        haystack++;
        index++;
    }
    return (NULL);
}
