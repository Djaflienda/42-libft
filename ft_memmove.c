/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:57:25 by kschroed          #+#    #+#             */
/*   Updated: 2018/11/30 17:58:07 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *dstPointer;
    const char *srcPointer;
    size_t i;

    dstPointer = dst;
    srcPointer = src;
    i = 0;
    if (srcPointer < dstPointer)
        while ((int)--len >= 0)
            dstPointer[len] = srcPointer[len];
    else
    {
        while (i < len)
        {
            dstPointer[i] = srcPointer[i];
            i++;
        }
    }
    return (dst);
}
