/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auxiliar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:06:13 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/21 11:09:03 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int *nbr)
{
	int	u;
	int	d;

	if (*nbr < 100)
	{
		u = (*nbr % 10) + '0';
		d = (*nbr / 10) + '0';
		write(1, "	", 2);
		write(1, &d, 1);
		write(1, &u, 1);
	}
}

void	ft_putnbr_pointer_pointer(int *********nbr)
{
	int	u;
	int	d;

	if (*********nbr < 100)
	{
		u = (*********nbr % 10) + '0';
		d = (*********nbr / 10) + '0';
		write(1, "	", 2);
		write(1, &d, 1);
		write(1, &u, 1);
	}
}

void	int_to_char(int nbr)
{
	char	to_char;

	to_char = nbr + '0';
	write(1, &to_char, 1);
}

int	print_count_array_int(int *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		int_to_char(tab[i]);
		i++;
	}
	return (i);
}
