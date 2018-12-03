/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:40:37 by kschroed          #+#    #+#             */
/*   Updated: 2018/12/03 15:41:05 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = b;
	i = 0;
	while (i < len)
		ptr[i++] = c;
	return (b);
}
