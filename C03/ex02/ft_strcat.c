/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:05:47 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/31 15:09:49 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	d_size;

	d_size = 0;
	while (dest[d_size] != '\0')
		d_size++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[d_size] = src[i];
		i++;
		d_size++;
	}
	dest[d_size] = '\0';
	return (dest);
}
