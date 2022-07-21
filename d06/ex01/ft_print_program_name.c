/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrintala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:59:59 by jrintala          #+#    #+#             */
/*   Updated: 2022/07/06 21:14:07 by jrintala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{	
	int	i;

	i = 0;
	argc = 0;
	while (argv[0][i] != '\0')
	{	
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
}
