#include <stdio.h>
#include <unistd.h>
int	ft_iterative_factorial(int nb);

int main()
{
	int i;
	i = ft_iterative_factorial(-5);
	printf ("%d\n", i);
	return (0);
}
