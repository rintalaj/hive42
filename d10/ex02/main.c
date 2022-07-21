#include <stdio.h>

int test(int tab)
{
	tab = tab + 1;
	return(tab);
}

int	main()
{
	int tab[] = {1, 2, 3, 4, 5};
	int j;
	int *ar;
	
	ar = (int *) malloc (5 * sizeof (int));
	ar = ft_map(tab, 5, test);	
	j = 0;
	while (j < 5)
	{
		printf("%d", ar[j]);
				j++;
	}
	return(0);
}