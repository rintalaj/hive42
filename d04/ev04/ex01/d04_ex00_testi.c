#include <stdio.h>
#include <unistd.h>
int	ft_recursive_factorial(int nb);

int main()
{
	int i;
	i = ft_recursive_factorial(5);
	printf ("%d\n", i);
	return (0);
}
