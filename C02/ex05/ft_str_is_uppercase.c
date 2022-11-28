/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:26:57 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/27 16:13:16 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int	pos;
	unsigned int	is_uppercase;

	pos = 0;
	if (str[pos] == '\0')
		is_uppercase = 1;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 65 && str[pos] <= 90)
			is_uppercase = 1;
		else
		{
			is_uppercase = 0;
			return (is_uppercase);
		}
		pos++;
	}
	return (is_uppercase);
}
