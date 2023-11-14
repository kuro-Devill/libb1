/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychbily <ychbily@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:02:36 by ychbily           #+#    #+#             */
/*   Updated: 2023/11/14 16:29:00 by ychbily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdio.h"
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*lastocc;

	i = 0;
	lastocc = NULL;
	while (i <= ft_strlen(s))
	{
		if (s[i] == (char)c)
			lastocc = ((char *)(s + i));
		i++;
	}
	if (lastocc)
		return (lastocc);
	return (NULL);
}
