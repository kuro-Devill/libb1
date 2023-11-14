/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychbily <ychbily@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:12:13 by ychbily           #+#    #+#             */
/*   Updated: 2023/11/14 16:22:12 by ychbily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s;
	unsigned char		*c;

	s = (const unsigned char *)s1;
	c = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*s != *c)
			return (*s - *c);
		s++;
		c++;
	}
	return (0);
}
