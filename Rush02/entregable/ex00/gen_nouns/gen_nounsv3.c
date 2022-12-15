/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_nounsv3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fermarti <fermarti@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:24:14 by acampo-p          #+#    #+#             */
/*   Updated: 2022/10/30 21:18:55 by fermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		fig_calc(int nbr);
int		search_creator(int figs);
int		dict_searcher(int to_find, int *dictry_nbr);
void	char_printer(char *str);

void	scase_control(int nbr, int *dictry_nbr, char *dictry_char)
{
	int	figs;
	int	srch;
	int	index;
	int	digit;

	figs = fig_calc(nbr);
	while (figs > 0)
	{
		srch = search_creator(figs);
		digit = nbr / srch;
		index = ditc_searcher(digit, dictry_nbr);
		char_printer(&dictry_char[index]);
		index = ditc_searcher(srch, dictry_nbr);
		char_printer(&dictry_char[index]);
		figs -= 1;
	}

}

int	search_creator(int figs)
{
	int	dec_base;

	dec_base = 1;
	while (figs > 0)
	{
		dec_base *= 10;
		figs -= 1;
	}
	return (dec_base);
}

int	fig_calc(int nbr)
{
	int	figs;

	figs = 1;
	while (nbr / figs / 10 > 1)
		figs += 1;
	return (figs - 1);
}

int	dict_searcher(int to_find, int *dictry_nbr)
{
	int	index;

	index = 0;
	while (dictry_nbr[index] != to_find && index < 32)
		index += 1;
	return (index - 1);
}

void	char_printer(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str += 1;
	}
	write (1, " ", 1);
}

int	main(void)
{
	char	*nbr;
	int		*dictry_nbr;
	char	**dictry_char;

	nbr = "12345";
	*dictry_nbr[0] = 0;
	*dictry_nbr[1] = 1;
	*dictry_nbr[2] = 2;
	*dictry_nbr[3] = 3;
	*dictry_nbr[4] = 4;
	*dictry_nbr[5] = 5;
	*dictry_nbr[6] = 6;
	*dictry_nbr[7] = 7;
	*dictry_nbr[8] = 8;
	*dictry_nbr[9] = 9;
	*dictry_nbr[10] = 10;
	*dictry_nbr[11] = 11;
	*dictry_nbr[12] = 12;
	*dictry_nbr[13] = 13;
	*dictry_nbr[14] = 14;
	*dictry_nbr[15] = 15;
	*dictry_nbr[16] = 16;
	*dictry_nbr[17] = 17;
	*dictry_nbr[18] = 18;
	*dictry_nbr[19] = 19;
	*dictry_nbr[20] = 20;
	*dictry_nbr[21] = 30;
	*dictry_nbr[22] = 40;
	*dictry_nrb[23] = 50;
	*dictry_nbr[24] = 60;
	*dictry_nbr[25] = 70;
	*dictry_nbr[26] = 80;
	*dictry_nbr[27] = 90;
	*dictry_nbr[28] = 100;
	*dictry_nbr[29] = 1000;
	*dictry_nbr[30] = 1000000;
	*dictry_nbr[31] = 1000000000;

	dictry_char[0] = "zero";
	dictry_char[1] = "one";
	dictry_char[2] = "two";
	dictry_char[3] = "three";
	dictry_char[4] = "four";
	dictry_char[5] = "five";
	dictry_char[6] = "six";
	dictry_char[7] = "seven";
	dictry_char[8] = "eight";
	dictry_char[9] = "nine";
	dictry_char[10] = "ten";
	dictry_char[11] = "eleven";
	dictry_char[12] = "twelve";
	dictry_char[13] = "thirteen";
	dictry_char[14] = "fourteen";
	dictry_char[15] = "fifteen";
	dictry_char[16] = "sixteen";
	dictry_char[17] = "seventeen";
	dictry_char[18] = "eighteen";
	dictry_char[19] = "nineteen";
	dictry_char[20] = "twenty";
	dictry_char[21] = "thirty";
	dictry_char[22] = "forty";
	dictry_char[23] = "fifty";
	dictry_char[24] = "sixty";
	dictry_char[25] = "seventy";
	dictry_char[26] = "eighty";
	dictry_char[27] = "ninety";
	dictry_char[28] = "hundred";
	dictry_char[29] = "thousand";
	dictry_char[30] = "million";
	dictry_char[31] = "billion";
	scase_control(nbr, dictry_nbr, dictry_char);
}
