/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:53:44 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/20 17:08:43 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int unsigned	counter;

	counter = 0;
	while (str[counter])
	{
		counter++;
	}
	return (counter);
}
