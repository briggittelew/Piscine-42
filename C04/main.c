/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:16:45 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/31 16:24:40 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	char	*str;
	int		nb;

	str = "Hooooolaaaaa enfermero";
	nb = -2147483647;
	ft_putstr("ft_strlen\t");
	ft_putnbr(ft_strlen(str));
	ft_putstr("\nft_putstr\t");
	ft_putstr(str);
	ft_putstr("\nft_putnbr\t");
	ft_putnbr(nb);
	ft_putstr("\nft_atoi\t--+-   -2147483647\t");
	ft_putnbr(ft_atoi("--+-   -2147483647"));
	ft_putstr("\nbase bin\t");
	ft_putnbr_base(nb, "01");
	ft_putstr("\nbase octal\t");
	ft_putnbr_base(nb, "poniguay");
	ft_putstr("\nbase hexa\t");
	ft_putnbr_base(nb, "0123456789ABCDEF");
	ft_putstr("\nbase dec\t");
	ft_putnbr_base(nb, "0123456789");
}
