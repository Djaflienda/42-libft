/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:57:25 by kschroed          #+#    #+#             */
/*   Updated: 2018/11/30 17:58:07 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strjoin(char const *s1, char const *s2)
{
//    size_t i;
//    size_t j;
//    char *concatRes;
//
//    i = 0;
//    j = 0;
//    if (!s1 || !s2)
//        return (NULL);
//    concatRes = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
//    if (!concatRes)
//        return (NULL);
//    while (j < ft_strlen(s2))
//    {
//        while (i < ft_strlen(s1))
//        {
//            concatRes[i] = s1[i];
//            i++;
//        }
//        concatRes[i++] = s2[j++];
//    }
//    concatRes[i] = '\0';
//    return (concatRes);
    
    
    char    *temp;
    
    if (!s1 || !s2)
        return (NULL);
    temp = (char *)malloc(sizeof(*temp)\
                          * (ft_strlen(s1) + (ft_strlen(s2) + 1)));
    if (!temp)
        return (NULL);
    ft_strcpy(temp, s1);
    ft_strcat(temp, s2);
    return (temp);
}

