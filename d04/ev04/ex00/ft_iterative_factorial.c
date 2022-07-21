/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrintala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 18:31:53 by jrintala          #+#    #+#             */
/*   Updated: 2022/07/03 15:20:47 by jrintala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	res = 1;
	while (nb > 0)
	{
	res = res * nb;
	nb--;
	}
	return (res);
}
