/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   navigate_array_col.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaraiza <lgaraiza@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:13:38 by lgaraiza          #+#    #+#             */
/*   Updated: 2022/10/23 20:15:08 by lgaraiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	set_nbr(int row, int col, char value, char array42[6][6])
{
	char	*ptr_array;

	ptr_array = &array42[0][0];
	*(ptr_array + row * 6 + col) = value;
}

void	compare_first_row(char array42[6][6], int col, int row, bool go_down)
{
	char	value;

	value = '4';
	while (row >= 0 && row < 4 && go_down == true)
	{
		row++;
		if (row == 1)
			set_nbr(row, col, value, array42);
		else
			set_nbr(row, col, array42[row][col], array42);
	}
	while (row <= 5 && row > 1 && go_down == false)
	{
		row--;
		if (row == 4)
			set_nbr(row, col, value, array42);
		else
			set_nbr(row, col, array42[row][col], array42);
	}
}

void	compare_third_row(char array42[6][6], int col, int row, bool go_down)
{
	char	value;

	value = '3';
	if (array42[4][col] == '4' && go_down == true)
	{
		row = 1;
		set_nbr(row, col, value, array42);
	}
	if (array42[1][col] == '4' && go_down == false)
	{
		row = 4;
		set_nbr(row, col, value, array42);
	}
	if (array42[3][col] == '4' && array42[4][col] != '3' && go_down == true)
	{
		row = 1;
		set_nbr(row, col, value, array42);
	}
	if (array42[2][col] == '4' && array42[1][col] != '3' && go_down == false)
	{
		row = 4;
		set_nbr(row, col, value, array42);
	}
}

void	compare_fourth_row(char array42[6][6], int col, int row, bool go_down)
{
	char	value;

	value = '1';
	while (row >= 0 && row < 4 && go_down == true)
	{
		row++;
		set_nbr(row, col, value, array42);
		value++;
	}
	while (row <= 5 && row > 1 && go_down == false)
	{
		row--;
		set_nbr(row, col, value, array42);
		value++;
	}
}

void	search_by_row(char array42[6][6], int row, char c_search)
{
	int		col;
	bool	go_down;

	col = 1;
	if (row == 0)
		go_down = true;
	else if (row == 5)
		go_down = false;
	while (col > 0 && col < 5)
	{
		if (array42[row][col] == c_search && c_search == '4')
			compare_fourth_row(array42, col, row, go_down);
		if (array42[row][col] == c_search && c_search == '1')
			compare_first_row(array42, col, row, go_down);
		if (array42[row][col] == c_search && c_search == '2')
			compare_third_row(array42, col, row, go_down);
		col++;
	}
}
