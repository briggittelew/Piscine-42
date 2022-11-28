/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:17:33 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/21 11:31:16 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	carriage;

	i = 0;
	while (i >= 0 && i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				carriage = tab[i];
				tab[i] = tab[j];
				tab[j] = carriage;
			}
			j++;
		}
		i++;
	}
}
