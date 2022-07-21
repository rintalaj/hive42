#include<unistd.h>
#include<stdio.h>
void	ft_putstr(char *str);
void	ft_putchar(char str)
{
	write (1, &str, 1);
}

int main()
{
	ft_putstr("hello");
	return(0);
}
