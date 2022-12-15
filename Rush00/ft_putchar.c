/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icueto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:10:25 by icueto-r          #+#    #+#             */
/*   Updated: 2022/10/15 17:10:30 by icueto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j, int x, int y)
{
	if ((i == 1 && j <= x && 1 % j == 0))
		write (1, "A", 1);
	else if (i == 1 && j < x && 1 % j == 1)
		write (1, "B", 1);
	else if ((i == 1 && j == x))
		write (1, "C", 1);
	else if ((i == y && j < x && 1 % j == 0) || (i == y && x == 1))
		write (1, "C", 1);
	else if (i == y && j < x && 1 % j == 1)
		write (1, "B", 1);
	else if (i == y && j == x && x > 1)
		write (1, "A", 1);
	else
	{
		if (1 % j == 0 || j == x)
			write (1, "B", 1);
		if (1 % j == 1 && j < x)
			write (1, " ", 1);
	}
}
