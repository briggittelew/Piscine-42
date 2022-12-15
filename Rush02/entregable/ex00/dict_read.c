/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fermarti <fermarti@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:32:56 by fermarti          #+#    #+#             */
/*   Updated: 2022/10/30 21:22:15 by fermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

void	ft_search_num_num(char *arr)
{
	int		i;
	int		j;
	int		k;
	char	*num_num;

	i = 0;
	j = 0;
	k = 0;
	num_num = malloc(12 * sizeof(char));
	while (arr[i] != '\0')
	{
		if (i == 0)
			j = i;
		if (arr[i] == '\n')
			j = i + 1;
		if (arr[i] >= '0' && arr[i] <= '9')
			k++;
		if (arr[i] == ':')
		{
			write(1, ft_strncpy(num_num, arr + j, k), 12);
			write(1, "\n", 2);
			k = 0;
		}
		i++;
	}
	free(num_num);
}

void	ft_search_num_text(char *arr)
{
	int		i;
	int		j;
	int		k;
	char	*num_text;

	i = 0;
	j = 0;
	k = 0;
	num_text = malloc(12 * sizeof(char));
	while (arr[i] != '\0')
	{
		if (arr[i] == ' ')
			j = i + 1;
		if (arr[i] >= 'a' && arr[i] <= 'z')
			k++;
		if (arr[i] == '\n')
		{
			write(1, ft_strncpy(num_text, arr + j, k), 12);
			write(1, "\n", 2);
			k = 0;
		}
		i++;
	}
	free(num_text);
}

void	ft_read_dict(void)
{
	int		filedesc;
	char	buf[350];
	ssize_t	nrbytes;

	filedesc = open("./numbers.dict", O_RDONLY);
	if (filedesc == -1)
		write(1, "Error al abrir el archivo", 25);
	else
	{
		nrbytes = read(filedesc, buf, 350);
		close (filedesc);
		if (nrbytes == 0)
			write(1, "Archivo vacio", 13);
		else
		{
			ft_search_num_num(buf);
			write(1, "\n", 2);
			ft_search_num_text(buf);
		}
	}
}

/*int	main(void)
{
	ft_read_dict();
	return (0);
}*/
