#include<unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	p;

    p = argc;

	while (p < argc)
	{
		i = 0;
		while (argv[p][i] != '\0')
		{
			ft_putchar(argv[p][i]);
			i++;
		}
		p++;
		ft_putchar('\n');
	}
}

void	ft_putchar(char c)
    {
        write (1, &c, 1);
    }