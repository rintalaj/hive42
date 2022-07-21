#include<stdio.h>
#include<unistd.h>

void	ft_putnbr(int nb);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	ft_putnbr(-2147483648);
	return(0);
}
