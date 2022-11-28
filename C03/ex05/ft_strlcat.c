/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:19:42 by karlewis          #+#    #+#             */
/*   Updated: 2022/10/31 15:41:49 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	s_dest;

	s_dest = 0;
	while (dest[s_dest] != '\0')
		s_dest++;
	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[s_dest] = src[i];
		i++;
		s_dest++;
	}	
	dest[s_dest] = '\0';
	j = 0;
	while (src[j] != '\0')
		j++;
	return (j + size);
}
