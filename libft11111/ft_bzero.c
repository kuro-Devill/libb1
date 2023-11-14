/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychbily <ychbily@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:28:22 by ychbily           #+#    #+#             */
/*   Updated: 2023/11/14 16:15:34 by ychbily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"
#include "stdio.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*ptr;

	ptr = str;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}
