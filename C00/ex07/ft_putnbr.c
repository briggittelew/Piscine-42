/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:57:31 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/24 18:15:47 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	nbr_putchar(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	u;
	int	nn;

	if (nb >= 0)
	{
		if (nb < 10)
		{
			nbr_putchar(nb);
		}	
		if (nb >= 10)
		{
			nn = nb / 10;
			ft_putnbr(nn);
			u = nb % 10;
			nbr_putchar(u);
		}
	}
	else
	{
		write(1, "-", 1);
		nb = nb * -1;
		ft_putnbr(nb);
	}	
}
