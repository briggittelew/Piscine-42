/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:22:31 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/26 09:22:44 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	unsigned int	pos;
	unsigned int	is_alpha;
	unsigned int	aux;

	pos = 0;
	if (str[pos] == '\0')
		is_alpha = 1;
	while (str[pos] != '\0')
	{
		aux = str[pos];
		if ((aux >= 65 && aux <= 90) || (aux >= 97 && aux <= 122))
			is_alpha = 1;
		else
		{
			is_alpha = 0;
			return (is_alpha);
		}			
		pos++;
	}
	return (is_alpha);
}
