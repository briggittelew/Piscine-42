/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:48:44 by karlewis          #+#    #+#             */
/*   Updated: 2022/11/02 11:57:56 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	call_strcmp(void);
void	call_strncmp(void);
void	call_strcat(void);

void	print_putnbr(char c)
{
	write(1, &c, 1);
}

void	ft_print_int(int nb)
{
	if (nb < 0)
	{
		print_putnbr('-');
		nb = nb * -1;
	}
	if (nb < 10)
	{
		print_putnbr(nb + '0');
		return ;
	}
	else
	{
		ft_print_int(nb / 10);
		ft_print_int(nb % 10);
	}
}

void	ft_print_str(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print(char *s1, char *s2)
{
	ft_print_str(s1);
	ft_print_str(s2);
}

int	main(void)
{
	call_strcmp();
	call_strncmp();
	call_strcat();
	return (0);
}
