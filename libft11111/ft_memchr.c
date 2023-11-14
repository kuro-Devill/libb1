/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychbily <ychbily@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:33:14 by ychbily           #+#    #+#             */
/*   Updated: 2023/11/14 16:21:31 by ychbily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdio.h"
#include "string.h"
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	unsigned char		cc;

	src = (const unsigned char *)s;
	cc = (unsigned char)c;
	while (n-- > 0)
	{
		if (*src == cc)
			return ((void *)src);
		src++;
	}
	return (NULL);
}
