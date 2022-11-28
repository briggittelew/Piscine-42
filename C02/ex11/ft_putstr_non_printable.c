/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:31:40 by karlewis          #+#    #+#             */
/*   Updated: 2022/11/02 11:44:43 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_np(char str_i)
{
	write(1, &str_i, 1);
}

void	translate_hex(char str_i)
{
	unsigned char	res;

	ft_print_np('\\');
	res = str_i % 16;
	if (res >= 0 && res < 16)
	{
		ft_print_np('0');
		if (res >= 0 && res < 10)
			ft_print_np(res + '0');
		else if (res >= 10 && res < 16)
			ft_print_np(res + 87);
	}
	else
		translate_hex(str_i / 16);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
			translate_hex(str[i]);
		else
			ft_print_np(str[i]);
		i++;
	}
}

/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}*/