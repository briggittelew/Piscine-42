/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:27:44 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/27 16:15:19 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	unsigned int	pos;
	unsigned int	is_printable;

	pos = 0;
	if (str[pos] == '\0')
		is_printable = 1;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 32 && str[pos] <= 126)
			is_printable = 1;
		else
		{
			is_printable = 0;
			return (is_printable);
		}
		pos++;
	}
	return (is_printable);
}
