/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 20:02:24 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/12 21:31:03 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *cdst;
	char *csrc;
	unsigned int i;

	cdst = (char *) dst;
	csrc = (char *) src;
	i = 0;
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (cdst);
}
