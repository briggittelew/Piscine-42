/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 09:37:25 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/29 09:55:25 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structure.h"

int		ft_validate_search(char *str);
int		ft_validate_add(char *str);
void	ft_print_str(char *str);
int		ft_extract_number(char *str);
void	ft_split(void);


int	main(int argc, char *argv[])
{
	char	*nbr;
	char	*nbr_text;
	struct	number	list_number[32];	

	nbr = argv[1];
	nbr_text = malloc(sizeof(char));
	if (argc < 2)    
	{
		ft_print_str("ERROR");
		return (0);
	}
	else if (argc == 2)
	{
		if (ft_validate_search(nbr) == 1)
		{
			ft_print_str("Buscando...");
			ft_extract_number(nbr);
			ft_split();
			list_number[0].nbr = 0;
			list_number[0].str_nbr = "zero";
			ft_print_str(list_number[0].str_nbr);
		}		
	}
	else if (argc == 3)
	{
		if(ft_validate_add(nbr) == 1)
		{
			ft_print_str("Agregando al diccionario...");
			nbr_text = argv[2];
		}
	}
	return (0);
}

