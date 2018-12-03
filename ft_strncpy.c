/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:57:25 by kschroed          #+#    #+#             */
/*   Updated: 2018/11/30 17:58:07 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strncpy(char *dst, const char *src, size_t len)
{
    size_t i;
    
    i = 0;
    while (i < len)
    {
        if (src[i] != '\0')
            dst[i] = src[i];
        else
            while (i < len)
                dst[i++] = '\0';
        i++;
    }
    return (dst);
}
