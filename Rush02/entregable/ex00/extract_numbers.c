/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fermarti <fermarti@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:00:38 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/30 21:51:32 by fermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			ft_get_size(char *str);
long int	ft_atoi(char *str);

int	ft_get_divider(char *str)
{
	unsigned int	i;
	unsigned int	divider;

	i = 0;
	divider = 1;
	while (str[i] != '\0')
	{
		if (i > 0)
			divider = divider * 10;
		i++;
	}
	return (divider);
}

void	ft_extract_number(char *str)
{
	unsigned int	divider;
	unsigned int	atoi_nbr;
	unsigned int	digit;
	unsigned int	size;
	unsigned int	i;

	divider = ft_get_divider(str);
	atoi_nbr = ft_atoi(str);
	size = ft_get_size(str);
	i = 0;
	while (i >= 0 && i < size)
	{
		digit = atoi_nbr / divider;
		printf("%d\t", digit);
		printf("%d\n", divider);
		atoi_nbr = atoi_nbr - (digit * divider);
		divider = divider / 10;
		i++;
	}
}
