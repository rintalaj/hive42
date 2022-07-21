/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrintala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 21:32:46 by jrintala          #+#    #+#             */
/*   Updated: 2022/07/11 23:20:40 by jrintala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*m;

	m = (int *) malloc (length * sizeof (int));
	i = 0;
	while (i < length)
	{
		m[i] = f(tab[i]);
		i++;
	}
	return (m);
}
