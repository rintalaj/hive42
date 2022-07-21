/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_last.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrintala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:50:05 by jrintala          #+#    #+#             */
/*   Updated: 2022/07/06 21:21:10 by jrintala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{

	int	i;
	i = 0;

	if (argc < 2)
	{
	while (argv[0][i] != '\0')
		{
			ft_putchar(argv[0][i]);
			i++;
		}
	return(0);
	}

	int p = argc - 1;

	i = 0;

		while (argv[p][i] != '\0')
		{
			ft_putchar(argv[p][i]);
			i++;
		}
		ft_putchar('\n');

}

\\\\\ viimeinen argumentti ja jos ei ole argumenttia niin ohjelman nimi


