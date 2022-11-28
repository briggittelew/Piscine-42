/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rint_combn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:43:09 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/24 17:51:05 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_desbordado(char array[], int n)
{
	int	nn;

	nn = n - 1;
	while (n > 0)
	{
		if (array[n] > '9')
		{
			array[n] = '0';
			array[nn]++;
			ft_desbordado(array, nn);
		}	
		n--;
	}
}

int	ft_is_valid(char array[], int n)
{
	int		j;
	char	v;

	j = 0;
	while (j >= 0 && j < n - 1)
	{
		if (array[j] < array[j + 1])
			v = '1';
		else
			v = '0';
		j++;
	}
	return (v);
}

void	ft_putchar_combn(char array[], int n, int i)
{
	int		j;	
	char	v;
	int		cont;

	v = ft_is_valid(array, n);
	j = 0;
	cont = 0;
	if (v == '1')
	{
		while (j >= 0 && j < n)
		{							
			if (j == 0 && i >= 1)
				write(1, ", ", 2);
			write(1, &array[j], 1);
			j++;
		}
	}
}

int	ft_get_number(int n)
{
	int	nbr;
	int	i;

	i = 0;
	nbr = 1;
	while (i >= 0 && i < n)
	{
		nbr = nbr * 10;
		i++;
	}
	return (nbr);
}

void	ft_print_combn(int n)
{
	char	array[9];
	int		i;
	int		nbr;
	int		j;

	i = 0;
	j = 0;
	nbr = ft_get_number(n);
	while (i >= 0 && i < nbr)
	{
		if (i == 0)
		{
			while (j >= 0 && j < n)
			{
				array[j] = '0';
				j++;
			}
		}			
		array[n - 1]++;
		if (array[n - 1] <= '9')
			ft_putchar_combn(array, n, i);
		ft_desbordado(array, n - 1);
		i++;
	}
}
