/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_nouns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:24:14 by acampo-p          #+#    #+#             */
/*   Updated: 2022/10/30 13:11:29 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str);
void	dec_printer(char digit);
void	std_printer(char digit);
void	sufix_printer(int fig);
void	char_printer(char *str);

void	scase_control(char *nbr)
{
	int	len;

	len = str_len(nbr);
	while (len > 0)
	{
		if (len % 3 == 2)
			dec_printer(*nbr);
		else
			std_printer(*nbr);
		sufix_printer(len - 1);
		nbr += 1;
		len -= 1;
	}
}

int	str_len(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index += 1;
	return (index);
}

void	dec_printer(char digit)
{
	int		num;
	char	*digit_nouns[10];

	digit_nouns[0] = "zero";
	digit_nouns[1] = "";
	digit_nouns[2] = "two";
	digit_nouns[3] = "three";
	digit_nouns[4] = "four";
	digit_nouns[5] = "five";
	digit_nouns[6] = "six";
	digit_nouns[7] = "seven";
	digit_nouns[8] = "eight";
	digit_nouns[9] = "nine";
	num = digit - '0';
	char_printer(digit_nouns[num]);
}

void	std_printer(char digit)
{
	int		num;
	char	*digit_nouns[10];

	digit_nouns[0] = "zero";
	digit_nouns[1] = "one";
	digit_nouns[2] = "two";
	digit_nouns[3] = "three";
	digit_nouns[4] = "four";
	digit_nouns[5] = "five";
	digit_nouns[6] = "six";
	digit_nouns[7] = "seven";
	digit_nouns[8] = "eight";
	digit_nouns[9] = "nine";
	num = digit - '0';
	char_printer(digit_nouns[num]);
}

void	sufix_printer(int fig)
{
	char	*fig_nouns[10];

	fig_nouns[0] = "";
	fig_nouns[1] = "";
	fig_nouns[2] = "hundred";
	fig_nouns[3] = "thousand";
	fig_nouns[4] = "ten thousand";
	fig_nouns[5] = "hundred thousand";
	fig_nouns[6] = "million";
	fig_nouns[7] = "ten million";
	fig_nouns[8] = "hundred million";
	fig_nouns[9] = "billion";
	char_printer(fig_nouns[fig]);
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

	nbr = "12345";
	scase_control(nbr);
}
