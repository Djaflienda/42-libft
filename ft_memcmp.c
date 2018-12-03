/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:57:25 by kschroed          #+#    #+#             */
/*   Updated: 2018/11/30 17:58:07 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const unsigned char *s1Pointer;
    const unsigned char *s2Pointer;

    s1Pointer = s1;
    s2Pointer = s2;
    i = 0;
    while (i < n && s1Pointer[i] == s2Pointer[i])
        i++;
    if (i == n)
        return (0);
    return (s1Pointer[i] - s2Pointer[i]);
}
