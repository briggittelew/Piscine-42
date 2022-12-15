/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   navigate_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaraiza <lgaraiza@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:13:23 by lgaraiza          #+#    #+#             */
/*   Updated: 2022/10/23 20:14:52 by lgaraiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	set_nbr(int row, int col, char value, char array42[6][6]);

void	set_missing(int racum, int cacum, char array42[6][6], char c_search)
{
	racum = 10 - racum;
	cacum = 10 - cacum;
	set_nbr(racum, cacum, c_search, array42);
}

int	search_array_by_row(char array42[6][6], char c_search)
{
	int	row;
	int	col;
	int	counter;
	int	row_acum;
	int	col_acum;

	row = 1;
	counter = 0;
	row_acum = 0;
	col_acum = 0;
	while (row >= 1 && row < 5)
	{
		col = 1;
		while (col >= 1 && col < 5)
		{
			if (c_search == array42[row][col])
			{
				counter++;
				row_acum = row_acum + row;
				col_acum = col_acum + col;
			}
			col++;
		}
		row++;
	}
	if (counter == 3)
		set_missing(row_acum, col_acum, c_search, array42);
	return (counter);
}

void	one_left_in_row(char array42[6][6], int row)
{
	int	col;
	int	acum_row;
	int	counter;
	int	empty;

	col = 1;
	acum_row = 0;
	counter = 0;
	while (col >= 1 && col < 5)
	{
		if (array42[row][col] > 0)
			counter++;
		if (array42[row][col] == 0)
			empty = col;
		acum_row = acum_row + array42[row][col];
		col++;
	}
	if (counter == 3)
	{
		acum_row = (10 - acum_row) + '0';
		set_nbr(row, empty, acum_row, array42);
	}
}

void	one_left_in_col(char array42[6][6], int col)
{
	int	row;
	int	acum_col;
	int	counter;
	int	empty;

	row = 1;
	acum_col = 0;
	counter = 0;
	while (row >= 1 && row < 5)
	{
		if (array42[row][col] > 0)
			counter++;
		if (array42[row][col] == 0)
		{
			empty = row;
		}
		acum_col = acum_col + array42[row][col];
		row++;
	}
	if (counter == 3)
	{
		acum_col = (10 - acum_col) + '0';
		set_nbr(row, empty, acum_col, array42);
	}
}

void	search_left_one_ocurrency(char array42[6][6])
{
	char	c;
	int		row;
	int		col;

	c = '1';
	while (c >= '1' && c <= '4')
	{
		search_array_by_row(array42, c);
		c++;
	}
	row = 1;
	while (row >= 1 && row < 5)
	{
		one_left_in_row(array42, row);
		row++;
	}	
	col = 1;
	while (col >= 1 && col < 5)
	{
		one_left_in_row(array42, col);
		col++;
	}	
}

void	search_row_by_col(char array42[6][6])
{
	int	row;
	int	col;
	int	count;
	int	acum;

	row = 1;
	count = 0;
	while (row >= 1 && row < 5)
	{
		col = 1;
		while (col >= 1 && col < 5)
		{
			if (array42[row][col] == '0')
				count++;
			if (array42[row][col] != '0')
				acum = acum + array42[row][col];
			col++;
		}
		row++;
	}
}
