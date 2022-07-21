#include <stdio.h>


int ft_count_if(char **tab, int (*f)(char*));

int checking(char *tab)
{
	int i;

	i = 0;

	while (tab[i] != '\0')
	{

		if (tab[i] == 'z')
			return(1);
		i++;
	}
	return (0);
}
int main(int argc, char **argv)
{
	int r;
	if (argc >= 2)
	{	
		r = ft_count_if(argv, &checking);
		printf("%d", r);
	}	
	return (argc);
}
