/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:25:54 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/29 16:25:57 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_get_size(char *str);
void	ft_print_str(char *str);

void	ft_split(void)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size;
	char			*str;
	char			*char_nbr;
	char			*nbr_text;

	str = "HOLA MUNDO";
	size = ft_get_size(str);
	i = 0;
	j = 0;
	char_nbr = malloc(sizeof(char));
	nbr_text = malloc(sizeof(char));
	while (i >= 0 && i < size)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
		{
			j = 0;
			/*if (i != 0)
				char_nbr[i + 1] = '\0';
			if (i == size - 1)
				nbr_text[j] = '\0';*/
		}
		else
		{
			if (i >= 0  && i == j)
				char_nbr[j] = str[i];
			else
			{
				if (str[i] != ':')
					nbr_text[j] = str[i];
			}		
			j++;
		}
		i++;
	}
	ft_print_str("nbr: ");
	ft_print_str(char_nbr);
	ft_print_str("valor: ");
	ft_print_str(nbr_text);
}                                             