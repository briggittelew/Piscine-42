/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 09:55:45 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/29 09:55:50 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_str(char *str);
int		ft_atoi(char *str);

int	ft_validate_is_number(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

int	ft_validate_too_long(char *str)
{
	unsigned long int	atoi_nbr = ft_atoi(str);
	if (atoi_nbr > 4294967295)
		return (0);
	else
		return (1);
}

int	ft_validate_is_multiple(char *str)
{
	unsigned long	atoi_nbr = ft_atoi(str);
	if (atoi_nbr % 10 != 0)
		return (0);
	else
		return (1);
}

int	ft_validate_search(char *str)
{
	unsigned int	is_valid;

	is_valid = 1;
	if (ft_validate_is_number(str) == 0)
	{
		ft_print_str("ERROR: contiene caracteres no númericos");
		is_valid = 0;
	}
	if(ft_validate_too_long(str) == 0)
	{
		ft_print_str("ERROR: fuera del rango");
		is_valid = 0;
	}
	return (is_valid);
}

int	ft_validate_add(char *str)
{
	unsigned int is_valid;

	is_valid = 1;
	if (ft_validate_is_number(str) == 0)
	{
		ft_print_str("ERROR: contiene caracteres no númericos");
		is_valid = 0;
	}
	if(ft_validate_is_multiple(str) == 0)
	{
		ft_print_str("ERROR: no es un número válido para agregar al diccionario");
		is_valid = 0;
	}
	return (is_valid);
}