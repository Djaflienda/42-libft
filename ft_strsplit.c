/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:57:25 by kschroed          #+#    #+#             */
/*   Updated: 2018/11/30 17:58:07 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int ft_define_words_count(char const *s, char c)
{
    int i;
    int counter;

    i = 0;
    counter = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] != '\0')
            counter++;
        while (s[i] && s[i] != c)
            i++;
    }
    return (counter);
} 

char **ft_strsplit(char const *s, char c)
{
    int i;
    int j;
    int k;
    char **res;

    if (!s || !c)
        return (NULL);
    if (!(res = (char **)malloc(sizeof(char *) * (ft_define_words_count(s, c) + 1))))
        return (NULL);
    i = 0;
    k = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        j = i;
        while (s[i] != '\0' && s[i] != c)
            i++;
        if (i > j)
			(res[k] = ft_strndup(s + j, i - j)) && (k++);
	}
	res[k] = NULL;
	return (res);
}
