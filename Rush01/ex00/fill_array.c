/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaraiza <lgaraiza@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:12:50 by lgaraiza          #+#    #+#             */
/*   Updated: 2022/10/23 20:14:32 by lgaraiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	initialize_array(char array42[6][6])
{
	int	row;
	int	col;

	row = 0;
	while (row >= 0 && row < 6)
	{
		col = 0;
		while (col >= 0 && col < 6)
		{
			array42[row][col] = '0';
			col++;
		}
		row++;
	}
}

void	assign_clue_col(char *clue, char array42[6][6], int row, int c_char)
{
	char	*ptr_array;
	int		col;

	ptr_array = &array42[0][0];
	col = 0;
	while (col >= 0 && col < 6)
	{
		if (col > 0 && col < 5)
		{
			*(ptr_array + row * 6 + col) = clue[c_char];
			c_char++;
		}
		else
					*(ptr_array + row * 6 + col) = ' ';
		col++;
	}
}

void	assign_clue_row(char *clue, char array42[6][6], int col, int c_char)
{
	char	*ptr_array;
	int		row;

	ptr_array = &array42[0][0];
	row = 0;
	while (row >= 0 && row < 6)
	{
		if (row > 0 && row < 5)
		{
			*(ptr_array + row * 6 + col) = clue[c_char];
			c_char++;
		}
		else
			*(ptr_array + row * 6 + col) = ' ';
		row++;
	}	
}
