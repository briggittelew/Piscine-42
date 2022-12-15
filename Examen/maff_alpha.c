#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
    /*int	i;
	char c;

	i = 0;
	while (i >= 0 && i < 25)
	{
		if(i % 2 == 0)
			c = i + 97;
		else
			c = i + 65;			
		write(1, &c, 1);
		i++;
	}*/

	int	i;

	i = 96;
	while (i++ < 122)
		(i % 2 == 0) ? ft_putchar(i - 32): ft_putchar(i);
	ft_putchar('\n');
	return (0);
}