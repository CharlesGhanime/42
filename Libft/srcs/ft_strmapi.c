/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 22:09:35 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/13 05:12:30 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new;
	int i;

	new = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
			new[i] = (*f)(i, s[i]);
			i++;
	}
	return (new);
}
