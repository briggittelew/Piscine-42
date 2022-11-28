/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:24:15 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/27 16:09:08 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	unsigned int	pos;
	unsigned int	is_numeric;
	unsigned int	aux;

	pos = 0;
	if (str[pos] == '\0')
		is_numeric = 1;
	while (str[pos] != '\0')
	{
		aux = str[pos];
		if (aux >= 48 && aux <= 57)
			is_numeric = 1;
		else
		{
			is_numeric = 0;
			return (is_numeric);
		}
		pos++;
	}
	return (is_numeric);
}
