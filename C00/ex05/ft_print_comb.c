/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:02:36 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/18 15:31:21 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar_comb(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a >= '0' && a <= '9')
	{
		b = '0';
		while (b >= '0' && b <= '9')
		{
			c = '0';
			while (c >= '0' && c <= '9')
			{
				if (a < b && b < c)
					ft_putchar_comb(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
