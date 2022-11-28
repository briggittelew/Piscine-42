/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:13:54 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/21 11:26:06 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_putnbr_pointer_pointer(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);
void	ft_putnbr(int *nbr);
void	int_to_char(int nbr);
int		print_count_array_int(int *tab);
int		ft_strlen(char *str);

void	call_ft_ultimate_ft(void)
{
	int	nbr;
	int	*p1_nbr;
	int	**p2_nbr;
	int	***p3_nbr;
	int	****p4_nbr;
	int	*****p5_nbr;
	int	******p6_nbr;
	int	*******p7_nbr;
	int	********p8_nbr;

	nbr = '0';
	p1_nbr = &nbr;
	p2_nbr = &p1_nbr;
	p3_nbr = &p2_nbr;
	p4_nbr = &p3_nbr;
	p5_nbr = &p4_nbr;
	p6_nbr = &p5_nbr;
	p7_nbr = &p6_nbr;
	p8_nbr = &p7_nbr;
	write(1, "\nft_ultimate_ft", 16);
	ft_ultimate_ft(&p8_nbr);
	ft_putnbr_pointer_pointer(&p8_nbr);
}

void	call_ft_ft(void)
{
	int	nbr;

	nbr = 0;
	write(1, "\nft_ft", 7);
	ft_ft(&nbr);
	ft_putnbr(&nbr);
}

void	call_with_parameter_a_b(int a, int b)
{
	int	div;
	int	mod;

	write(1, "\nft_swap", 9);
	write(1, "	", 2);
	int_to_char(a);
	int_to_char(b);
	ft_swap(&a, &b);
	write(1, "	", 2);
	int_to_char(a);
	int_to_char(b);
	div = 0;
	mod = 0;
	write(1, "\nft_div_mod", 12);
	ft_div_mod(a, b, &div, &mod);
	write(1, "	", 2);
	int_to_char(div);
	int_to_char(mod);
	write(1, "\nft_ultimate_div_mod", 21);
	ft_ultimate_div_mod(&a, &b);
	write(1, "	", 2);
	int_to_char(a);
	int_to_char(b);
}

void	call_with_array(void)
{
	char	*str;
	int		tab [7] = {1, 6, 8, 9, 3, 2, 5};
	int		size;

	str = "Hello";
	size = 0;
	write(1, "\nft_putstr", 11);
	write(1, "	", 2);
	ft_putstr(str);
	size = ft_strlen(str);
	write(1, "\nft_strlen", 11);
	write(1, "	", 2);
	int_to_char(size);
	write(1, "\nft_rev_int_tab", 16);
	write(1, "	", 2);
	size = print_count_array_int(tab);
	ft_rev_int_tab(tab, size);
	write(1, "	", 2);
	print_count_array_int(tab);
	write(1, "\nft_sort_int_tab", 17);
	write(1, "	", 2);
	size = print_count_array_int(tab);
	ft_sort_int_tab(tab, size);
	write(1, "	", 2);
	print_count_array_int(tab);
}

int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 6;
	call_ft_ft();
	call_ft_ultimate_ft();
	call_with_parameter_a_b(a, b);
	call_with_array();
	return (0);
}
