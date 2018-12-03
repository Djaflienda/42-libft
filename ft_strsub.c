/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:57:25 by kschroed          #+#    #+#             */
/*   Updated: 2018/11/30 17:58:07 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *sub;
    size_t i;

    if (!s)
        return (NULL);
    sub = ft_strnew(len);
    if (!sub)
        return (NULL);
    i = 0;
    while (i < len)
        sub[i++] = s[start++];
    return (sub);
}
