/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fermarti <fermarti@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:34:08 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/30 21:17:54 by fermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_size(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

long int	ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	size;
	unsigned int	multiplier;
	unsigned long	atoi_nbr;

	size = ft_get_size(str);
	i = size;
	atoi_nbr = 0;
	multiplier = 1;
	while (i > 0)
	{
		atoi_nbr += (str[i - 1] - '0') * multiplier;
		multiplier = multiplier * 10;
		i --;
	}
	return (atoi_nbr);
}