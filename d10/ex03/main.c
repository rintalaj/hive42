#include <stdio.h>

int ft_any(char **tab, int (*f)(char*));
int checking(char *tab)
{
	if (tab[0] == 'z')
	{
		return(1);
	}
	return (0);
}
int main(int argc, char **argv)
{
	int r;
	if (argc >= 2)
	{	
		r = ft_any(argv, &checking);
		printf("%d", r);
	}	
	return (argc);
}
