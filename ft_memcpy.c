/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:57:25 by kschroed          #+#    #+#             */
/*   Updated: 2018/11/30 17:58:07 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    char *dstPointer;
    const char *srcPointer;

    dstPointer = dst;
    srcPointer = src;
    i = 0;
    while (i < n)
    {
        dstPointer[i] = srcPointer[i];
        i++;
    }
    return (dst);
}
