#include <unistd.h>

int	repeat_char(char c)
{
	int repeat;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 64;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 96;
	else
		repeat = 1;
	return (repeat);
}

int main(int argc, char *argv[])
{
	int	repeat;
	int	i;
	char	*str;

	if (argc == 2)
	{
		str = argv[1];
		i = 0;
		while (str[i])
		{
			repeat = repeat_char(str[i]);
			while (repeat--)
				write(1, &str[i], 1);
			i++;
		}		
	}
	write(1, "\n", 1);
	return (0);
}