/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychbily <ychbily@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 02:32:39 by ychbily           #+#    #+#             */
/*   Updated: 2023/11/14 16:22:30 by ychbily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"
#include "libft.h"

int	counter_str(char const *s, char c)
{
	int	count;
	int	str;

	count = 0;
	str = 0;
	while (*s)
	{
		if (*s == c)
			str = 0;
		else if (str == 0)
		{
			str = 1;
			count++;
		}
		s++;
	}
	return (count);
}

char	**rtrn(char **ptr, int j)
{
	while (j > 0)
	{
		j--;
		free(ptr[j]);
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;
	int		counted;

	counted = counter_str(s, c);
	j = 0;
	ptr = (char **)ft_calloc(counted + 1, sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	while (j < counted)
	{
		i = 0;
		while (s[i] == c && s[i] != 0)
			s++;
		while (s[i] != c && s[i] != 0)
			i++;
		ptr[j] = (char *)ft_calloc(i + 1, 1);
		if (ptr[j] == NULL )
			return (rtrn(ptr, j));
		ft_strlcpy(ptr[j], s, i + 1);
		s += i;
		j++;
	}
	return (ptr);
}
