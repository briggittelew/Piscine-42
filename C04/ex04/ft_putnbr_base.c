/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:08:28 by karlewis          #+#    #+#             */
/*   Updated: 2022/11/03 13:03:16 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char str_i)
{
	write(1, &str_i, 1);
}

void	ft_translate(int nbr, char *base)
{
	unsigned char	res;
	unsigned char	div;
	unsigned char	ibase;

	ibase = 0;
	while (base[ibase] != '\0')
		ibase++;
	div = nbr / ibase;
	res = nbr % ibase;
	if (div < ibase)
	{
		ft_print(base[div]);
		ft_print(base[res]);
	}
	else
	{
		ft_translate(div, base);
		ft_print(base[res]);
	}	
}

int	ft_validate(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (base[i] != '\0')
		i++;
	if (base[0] == '\0' || i == 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_validate(base) == 1)
	{
		if (nbr < 0)
		{
			ft_print('-');
			nbr = nbr * -1;
		}
		ft_translate(nbr, base);
	}
}
