/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auxiliar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:52:42 by karlewis          #+#    #+#             */
/*   Updated: 2022/11/02 11:55:36 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
char			*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
void			ft_print_str(char *str);
void			ft_print_int(int nbr);
void			ft_print(char *s1, char *s2);

void	call_strcmp(void)
{
	ft_print_str("ft_strcmp\n");
	ft_print("Hola mUndo\t", "Hola mundo\t");
	ft_print_int(ft_strcmp("Hola mUndo", "Hola mundo"));
	ft_print("\nHola mundo\t", "Hola Mundo\t");
	ft_print_int(ft_strcmp("Hola mundo", "Hola Mundo"));
	ft_print("\nHola mundo\t", "Hola mundo\t");
	ft_print_int(ft_strcmp("Hola mundo", "Hola mundo"));
}

void	call_strncmp(void)
{
	ft_print_str("\nft_strncmp\n");
	ft_print("Hola Mundo\t", "Hola mundo\t");
	ft_print_int(7);
	ft_print_str("\t");
	ft_print_int(ft_strncmp("Hola mUndo", "Hola mundo", 7));
	ft_print("\nHola mundo\t", "Hola Mundo\t");
	ft_print_int(6);
	ft_print_str("\t");
	ft_print_int(ft_strncmp("Hola mundo", "Hola Mundo", 6));
	ft_print("\nHola munDo\t", "Hola munDO\t");
	ft_print_int(5);
	ft_print_str("\t");
	ft_print_int(ft_strncmp("Hola munDo", "Hola munDO", 5));
}

void	call_strcat(void)
{
	char	src[] = "Mundo";
	char	dest[] = "Hola ";
	char	dest2[] = "Hola ";
	char	dest3[] = "Hola ";
	char	str[] = "Hola Mundo";
	char	to_find[] = "Mun";

	ft_print_str("\nft_strcat\n");
	ft_print("Hola \t", "Mundo\t");
	ft_print_str(ft_strcat(dest, src));
	ft_print_str("\nft_strncat\n");
	ft_print("Hola \t", "Mundo\t");
	ft_print_int(3);
	ft_print_str("\t");
	ft_print_str(ft_strncat(dest2, src, 3));
	ft_print_str("\nft_strstr\n");
	ft_print("Hola Mundo\t", "Mund\t");
	ft_print_str(ft_strstr(str, to_find));
	ft_print_str("\nft_strlcat\n");
	ft_print("Hola \t", "Mundo\t");
	ft_print_int(9);
	ft_print_str("\t");
	ft_print_int(ft_strlcat(dest3, src, 9));
}
