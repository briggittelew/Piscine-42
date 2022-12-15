/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fermarti <fermarti@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 09:37:25 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/30 23:27:39 by fermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structure.h"
#include <stdlib.h>

int		ft_validate_search(char *str);
int		ft_validate_add(char *str);
void	ft_print_str(char *str);
int		ft_extract_number(char *str);
void	ft_split(void);
void	ft_read_dict(void);

int	main(int argc, char *argv[])
{
	char			*nbr;
	char			*nbr_text;


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
			ft_read_dict();
		}		
	}
	else if (argc == 3)
	{
		if (ft_validate_add(nbr) == 1)
		{
			ft_print_str("Agregando al diccionario...");
			nbr_text = argv[2];
		}
	}
	return (0);
}