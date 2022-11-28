/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:58:54 by karlewis          #+#    #+#             */
/*   Updated: 2022/11/03 09:57:32 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			if (i == 0 || (str[i - 1] >= 32 && str[i - 1] <= 47))
				str[i] = str[i] - 32;
		else
			str[i] = str[i];
		else if (str[i] >= 65 && str[i] <= 90)
		{
			if (i > 0 || (str[i - 1] >= 48 && str[i - 1] <= 57))
				str[i] = str[i] + 32;
			if (i > 0 || (str[i - 1] >= 65 && str[i - 1] <= 90))
				str[i] = str[i] + 32;
		}			
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char loquesea[] = "salut, comment tu vas ? 42mts qurAnte-Deux; cinAnte+et+un\t";
	
	ft_strcapitalize(loquesea);
}*/
