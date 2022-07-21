#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     ft_atoi(char *str);
int atoi(const char *nptr);

int    main()
{
    char str[] = "-5-v   kld";
    int arvo = ft_atoi(str);
    int atoiarvo = atoi(str);
    printf("%d\n", arvo);
    printf("%d", atoiarvo);
    return(0);
}

