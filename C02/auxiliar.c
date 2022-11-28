/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:56:55 by karlewis          #+#    #+#             */
/*   Updated: 2022/11/02 11:33:46 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_print(char *str, int message);
void	ft_print_int(int nbr);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strcapitalize(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);

void	call_is_alpha(void)
{
	write(1, "\nft_str_is_alpha", 17);
	ft_print("Urduliz", 1);
	ft_print_int(ft_str_is_alpha("Urduliz"));
	ft_print("42", 1);
	ft_print_int(ft_str_is_alpha("42"));
	ft_print("", 1);
	ft_print_int(ft_str_is_alpha(""));
	write(1, "\nft_str_is_numeric", 19);
	ft_print("Urduliz", 1);
	ft_print_int(ft_str_is_numeric("Urduliz"));
	ft_print("42", 1);
	ft_print_int(ft_str_is_numeric("42"));
	ft_print("", 1);
	ft_print_int(ft_str_is_numeric(""));
}

void	call_is_lowercase(void)
{
	write(1, "\nft_str_is_lowercase", 21);
	ft_print("urduliz", 1);
	ft_print_int(ft_str_is_lowercase("urduliz"));
	ft_print("URDULIZ", 1);
	ft_print_int(ft_str_is_lowercase("URDULIZ"));
	ft_print("", 1);
	ft_print_int(ft_str_is_lowercase(""));
	write(1, "\nft_str_is_uppercase", 21);
	ft_print("urduliz", 1);
	ft_print_int(ft_str_is_uppercase("urduliz"));
	ft_print("URDULIZ", 1);
	ft_print_int(ft_str_is_uppercase("URDULIZ"));
	ft_print("", 1);
	ft_print_int(ft_str_is_uppercase(""));
}

void	call_is_printable(void)
{
	char str_strupcase[] = "UrDuliz";
	
	char	*src;

	src = "salut, comment tu vas ? 42mots quarAnte-Deux; cinquAnte+et+un";
	write(1, "\nft_str_is_printable", 21);
	ft_print("Urduliz!", 1);
	ft_print_int(ft_str_is_printable("Urduliz!"));
	ft_print("\aUrduliz", 1);
	ft_print_int(ft_str_is_printable("\aUrduliz"));
	ft_print("", 1);
	ft_print_int(ft_str_is_printable(""));
	write(1, "\nft_strupcase", 14);
	ft_print(str_strupcase, 1);
	ft_print(ft_strupcase("UrdUliz42"), 2);
	write(1, "\nft_strlowcase", 15);
	ft_print("UrDUliZ42", 1);
	ft_print(ft_strlowcase("UrDUliZ42"), 2);
	write(1, "\nft_strcapitalize", 18);
	ft_print(src, 1);
	ft_print(ft_strcapitalize(src), 2);
}
