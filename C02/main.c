/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:56:55 by karlewis          #+#    #+#             */
/*   Updated: 2022/11/02 11:40:17 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			ft_putstr_non_printable(char *str);
void			call_is_alpha(void);
void			call_is_lowercase(void);
void			call_is_printable(void);

void	ft_print(char *str, int message)
{
	unsigned int	i;

	if (message == 1)
		write(1, "\norigen: ", 10);
	if (message == 2)
		write(1, "\tdestino: ", 10);
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

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

int	main(void)
{
	char	*deststrcpy;
	char	*deststrncpy;
	char	*deststrlcpy;
	char	*src;

	src = "salut, comment tu vas ? 42mots quarAnte-Deux; cinquAnte+et+un\t";
	deststrcpy = malloc(10 * sizeof(char));
	deststrncpy = malloc(10 * sizeof(char));
	deststrlcpy = malloc(10 * sizeof(char));
	write(1, "ft_strcpy", 6);
	ft_print("Urduliz", 1);
	ft_print(ft_strcpy(deststrcpy, "Urduliz"), 2);
	write(1, "\nft_strncpy", 9);
	ft_print("Urduliz", 1);
	ft_print(ft_strncpy(deststrncpy, "Urduliz", 3), 2);
	call_is_alpha();
	call_is_lowercase();
	call_is_printable();
	write(1, "\nft_strlcpy", 12);
	ft_print(src, 1);
	ft_print_int(ft_strlcpy(deststrlcpy, src, 5));
	write(1, "\nft_putstr_non_printable\n", 26);
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}
