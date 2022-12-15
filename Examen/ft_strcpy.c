#include <unistd.h>
#include <stdlib.h>

char    *ft_strcpy(char  *s1, char *s2)
{
    unsigned int    i;

    i = 0;
    while (s2[i] !=  '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return(s1);
}

int main(void)
{
    char *s1;
    char *s2;
    
    s2 = "Hola mundo";
    s1 = malloc(10*sizeof(char));
    s1 =  ft_strcpy(s1, s2);
    while (*s1)
        write(1, s1++, 1);
}