/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:57:25 by kschroed          #+#    #+#             */
/*   Updated: 2018/11/30 17:58:07 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
//    size_t i;
//
//    i = 0;
//    if (n == 0)
//        return (0);
//    while (n > 0 && s1[i] != '\0' && s1[i] == s2[i])
//    {
//        i++;
//        n--;
//    }
//    return (*((unsigned char *)&s1[i]) - *((unsigned char *)&s2[i]));
    
    
    while (n && *s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
        n--;
    }
    return (n) ? (*(const unsigned char *)s1 - *(const unsigned char *)s2) : 0;
}
