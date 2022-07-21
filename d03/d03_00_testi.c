#include<stdlib.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{	*nbr = 42;
}

int	main()
{
	char mynumber;
	char *mypoint = &mynumber;
	ft_ft(mypoint);
	printf("%d",*mypoint);
	return(0);
}
