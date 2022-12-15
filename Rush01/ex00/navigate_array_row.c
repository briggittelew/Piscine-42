/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   navigate_array_row.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaraiza <lgaraiza@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:14:13 by lgaraiza          #+#    #+#             */
/*   Updated: 2022/10/23 20:15:19 by lgaraiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	set_nbr(int row, int col, char value, char array42[6][6]);

void	compare_second_col(char array42[6][6], int col, int row, bool go_right)
{
	char	value;

	value = '2';
	while (col >= 0 && col < 4 && go_right == true)
	{
		col++;
		if (col == 1)
			set_nbr(row, col, value, array42);
		else
			set_nbr(row, col, array42[row][col], array42);
	}
}

void	compare_first_col(char array42[6][6], int col, int row, bool go_right)
{
	char	value;

	value = '4';
	while (col >= 0 && col < 4 && go_right == true)
	{
		col++;
		if (col == 1)
			set_nbr(row, col, value, array42);
		else
			set_nbr(row, col, array42[row][col], array42);
	}
	while (col <= 5 && col > 1 && go_right == false)
	{
		col--;
		if (col == 4)
			set_nbr(row, col, value, array42);
		else
			set_nbr(row, col, array42[row][col], array42);
	}
}

void	compare_third_col(char array42[6][6], int col, int row, bool go_right)
{
	char	value;

	value = '3';
	if (array42[row][4] == '4' && go_right == true)
	{
		col = 1;
		set_nbr(row, col, value, array42);
	}
	if (array42[row][1] == '4' && go_right == false)
	{
		col = 4;
		set_nbr(row, col, value, array42);
	}
	if (array42[row][3] == '4' && array42[row][4] != '3' && go_right == true)
	{
		col = 1;
		set_nbr(row, col, value, array42);
	}
	if (array42[row][2] == '4' && array42[1][col] != '3' && go_right == false)
	{
		row = 4;
		set_nbr(row, col, value, array42);
	}
}

void	compare_fourth_col(char array42[6][6], int col, int row, bool go_right)
{
	char	value;

	value = '1';
	while (col >= 0 && col < 4 && go_right == true)
	{
		col++;
		set_nbr(row, col, value, array42);
		value++;
	}
	while (col <= 5 && col > 1 && go_right == false)
	{
		col--;
		set_nbr(row, col, value, array42);
		value++;
	}
}

void	search_by_col(char array42[6][6], int col, char c_search)
{
	int		row;
	bool	go_right;

	row = 1;
	if (col == 0)
		go_right = true;
	else if (col == 5)
		go_right = false;
	while (row > 0 && row < 5)
	{
		if (array42[row][col] == c_search && c_search == '4')
			compare_fourth_col(array42, col, row, go_right);
		if (array42[row][col] == c_search && c_search == '1')
			compare_first_col(array42, col, row, go_right);
		if (array42[row][col] == c_search && c_search == '2')
			compare_third_col(array42, col, row, go_right);
		row++;
	}
}
