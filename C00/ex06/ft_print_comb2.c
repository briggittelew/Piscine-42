/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:24:31 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/24 18:11:09 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar_comb2(int a, int b, int c, int d)
{
	if (c + d > a + b)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (a != '9' || b != '8')
			write(1, ", ", 2);
	}
}

void	ft_set_comb(int a, int b, int c, int d)
{
	while (a >= '0' && a <= '9')
	{
		b = '0';
		while (b >= '0' && b <= '9')
		{
			c = '0';
			while (c >= '0' && c <= '9')
			{
				d = '0';
				while (d >= '0' && d <= '9')
				{
					ft_putchar_comb2(a, b, c, d);
					d++;
				}				
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	ft_set_comb(a, b, c, d);
}
