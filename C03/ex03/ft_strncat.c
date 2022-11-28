/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:32:56 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/31 15:11:39 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	d_size;

	d_size = 0;
	while (dest[d_size] != '\0')
		d_size++;
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[d_size] = src [i];
		i++;
		d_size++;
	}
	dest[d_size] = '\0';
	return (dest);
}
