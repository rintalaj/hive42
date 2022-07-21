#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(const char *str)
{
	int i;
	int merkki;
	int res;

	i = 0;
	merkki = 1;
	res = 0;
	
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-')
	{	
		i++;
		merkki = -1;
	}

	if(str[i] == '+')
		i++;

	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
			i++;
	}
	return(res * merkki);
}

int	main()
{
	printf("%d\n", ft_atoi("23-4"));
    printf("%d", atoi("23-4"));
	return(0);
}
