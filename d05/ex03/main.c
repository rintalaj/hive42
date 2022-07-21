#include<stdio.h>
#include<unistd.h>

char *ft_strcpy(char *dest, char *src);

int main ()
{
    char dest[] = "PPP";
    char src [] = "KKKKKKK";
    printf("%s\n", src);
    printf("%s\n", dest);
    ft_strcpy(dest, src);
    printf("%s\n", src);
    printf("%s\n", dest);
    return(0);
}
