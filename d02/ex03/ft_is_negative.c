/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrintala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 19:01:13 by jrintala          #+#    #+#             */
/*   Updated: 2022/07/03 18:14:32 by jrintala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_is_negative()
{
	int	n;

	n = -3;
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
		ft_putchar('P');
}

int main()
{
	ft_is_negative();
	return(0);
}
