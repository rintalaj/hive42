/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrintala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:50:05 by jrintala          #+#    #+#             */
/*   Updated: 2022/07/06 21:21:10 by jrintala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	p;

	p = 1;
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
