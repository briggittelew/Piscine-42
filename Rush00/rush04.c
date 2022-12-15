/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icueto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:10:49 by icueto-r          #+#    #+#             */
/*   Updated: 2022/10/15 17:11:06 by icueto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j, int x, int y);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if ((x > 0 && y > 0))
	{
		while (i <= y)
		{
			while (j <= x)
			{
				ft_putchar(i, j, x, y);
				j++;
			}
			write (1, "\n", 1);
			j = 1;
			i++;
		}
	}
	return ;
}
