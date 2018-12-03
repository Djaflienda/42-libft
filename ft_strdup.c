/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:57:25 by kschroed          #+#    #+#             */
/*   Updated: 2018/11/30 17:58:07 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strdup(const char *s1)
{
    char *copy;
    int i;
    
    copy = (char *)malloc((int)ft_strlen(s1) + 1);
    if (!copy)
        return (NULL);
    i = 0;
    while (s1[i] != '\0')
    {
        copy[i] = s1[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}
