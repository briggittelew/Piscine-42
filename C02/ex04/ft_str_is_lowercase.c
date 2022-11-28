/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:24:50 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/27 16:12:14 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	unsigned int	pos;
	unsigned int	is_lowercase;

	pos = 0;
	if (str[pos] == '\0')
		is_lowercase = 1;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 97 && str[pos] <= 122)
			is_lowercase = 1;
		else
		{
			is_lowercase = 0;
			return (is_lowercase);
		}
		pos++;
	}
	return (is_lowercase);
}
