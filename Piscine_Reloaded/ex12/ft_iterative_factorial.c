/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:31:28 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/08 16:23:43 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int fact;

	i = 2;
	fact = nb;
	if (nb == 0 | nb == 1)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	else
	{
		while (i != fact)
		{
			nb = nb * i;
			i++;
		}
	}
	return (nb);
}
