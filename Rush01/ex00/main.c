/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaraiza <lgaraiza@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:13:03 by lgaraiza          #+#    #+#             */
/*   Updated: 2022/10/23 20:18:04 by lgaraiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	initialize_array(char array42[6][6]);
void	assign_clue_col(char *clue, char array42[6][6], int row, int c_char);
void	assign_clue_row(char *clue, char array42[6][6], int col, int c_char);
void	search_by_row(char array42[6][6], int row, char c_search);
void	search_by_col(char array42[6][6], int col, char c_search);
void	search_array_by_row(char array42[6][6], char c_char);
void	search_left_one_ocurrency(char array42[6][6]);
void	one_left_in_row(char array42[6][6]);

int	validate_clue(char *clue)
{
	unsigned int	counter;
	int				validate;

	counter = 0;
	validate = 1;
	while (clue[counter])
	{
		if (clue[counter] > '0' && clue[counter] <= '4')
			validate = 1;
		else
			validate = 0;
		counter++;
	}
	if (counter != 16)
		validate = 0;
	return (validate);
}

void	print_array(char array42[6][6])
{
	int	row;
	int	col;

	row = 0;
	while (row >= 0 && row < 6)
	{
		col = 0;
		while (col >= 0 && col < 6)
		{
			write(1, &array42[row][col], 1);
			col++;
		}
		row++;
		write(1, "\n", 1);
	}	
}

int	main(int argc, char *argv[])
{
	char	*clue;
	char	array42 [6][6];

	clue = argv[1];
	if (argc >= 2 && validate_clue(clue) == 1)
	{
		initialize_array(array42);
		assign_clue_col(clue, array42, 0, 0);
		assign_clue_col(clue, array42, 5, 4);
		assign_clue_row(clue, array42, 0, 8);
		assign_clue_row(clue, array42, 5, 12);
		search_by_row(array42, 0, '4');
		search_by_row(array42, 5, '4');
		search_by_row(array42, 0, '1');
		search_by_col(array42, 0, '4');
		search_by_col(array42, 5, '4');
		search_by_col(array42, 0, '1');
		search_by_col(array42, 5, '1');
		search_by_row(array42, 0, '2');
		search_by_row(array42, 5, '2');
		search_by_col(array42, 0, '2');
		search_by_col(array42, 5, '2');
		search_left_one_ocurrency(array42);
		print_array(array42);
	}
	else
		write(1, "\n", 1);
}
