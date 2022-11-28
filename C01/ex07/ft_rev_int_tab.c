/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:17:32 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/21 11:29:00 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	c_back;
	int	carriage;

	counter = 0;
	c_back = size - 1;
	while (counter >= 0 && counter < size / 2)
	{
		carriage = tab[counter];
		tab[counter] = tab[c_back];
		tab[c_back] = carriage;
		c_back--;
		counter++;
	}
}
