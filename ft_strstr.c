/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:57:25 by kschroed          #+#    #+#             */
/*   Updated: 2018/11/30 17:58:07 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strstr(const char *haystack, const char *needle)
{
    return (ft_strnstr(haystack, needle, ft_strlen(haystack)));
//    int    i;
//    int    j;
//    int    bool_loool;
//    int    k;
//
//    if (!ft_strlen(needle))
//        return ((char *)haystack);
//    i = -1;
//    bool_loool = 0;
//    while (*(haystack + ++i) && !bool_loool)
//    {
//        if (*(haystack + i) == *(needle + 0))
//        {
//            j = 0;
//            k = i;
//            bool_loool = 1;
//            while (*(needle + j))
//                if (*(needle + j++) != *(haystack + k++))
//                    bool_loool = 0;
//            if (bool_loool)
//                return ((char *)haystack + i);
//        }
//    }
//    return (0);
}
