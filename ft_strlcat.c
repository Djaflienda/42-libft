/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:57:25 by kschroed          #+#    #+#             */
/*   Updated: 2018/11/30 17:58:07 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    int j;
    size_t dstLen;
    size_t srcLen;

    i = ft_strlen(dst);
    j = 0;
    dstLen = ft_strlen(dst);
    srcLen = ft_strlen(src);
    if (dstsize < dstLen + 1)
        return (srcLen + dstsize);
    if (dstsize > dstLen + 1)
        while (i < dstsize - 1)
            dst[i++] = src[j++];
    dst[i] = '\0';
    return (dstLen + srcLen);
}
