#include<stdio.h>
#include<unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    
    i = 0;
    
    while (*src != '\0' || i !=  n)
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';

    return (dest);
}

    while i-- != 

int main ()
{
    char dest[] = "loppupaikka";
    char src [] = "alku";
    unsigned int n = 2;
    printf("%s\n", src);
    printf("%s\n", dest);
    ft_strncpy(dest, src, n);
    printf("%s\n", src);
    printf("%s\n", dest);
    return(0);
}
