/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:57:30 by karlewis          #+#    #+#             */
/*   Updated: 2022/11/03 13:00:57 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_putnbr(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < -2147483647)
	{
		ft_putnbr(-2);
		ft_putnbr(147483647);
	}
	if (nb < 0)
	{
		print_putnbr('-');
		nb = nb * -1;
	}
	if (nb < 10)
	{
		print_putnbr(nb + '0');
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
