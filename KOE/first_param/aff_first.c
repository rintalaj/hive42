#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}

char	ft_first(char	*str)
{
	int i;
	i = 0;
	
	while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;	
		}
		ft_putchar('\n');
		return(*str);
}

int	main(int	argc, char	**argv)
{
	if (argc < 2)
		ft_putchar('\n');
		
	else
	{
		ft_first(argv[1]);
		ft_putchar('\n');
	}
	return(0);		
}

