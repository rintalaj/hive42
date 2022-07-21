/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alpabet.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrintala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:24:35 by jrintala          #+#    #+#             */
/*   Updated: 2022/07/03 16:19:51 by jrintala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return(0);
}
void	ft_print_alphabet(void)
{
	int	i;

	i = 'z';
	while (i >= 'a')
	{
		ft_putchar(i);
			i--;
	}
}


int main ()
{
	ft_print_alphabet();
	return(0);
}

