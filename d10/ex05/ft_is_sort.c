/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrintala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:23:50 by jrintala          #+#    #+#             */
/*   Updated: 2022/07/12 18:29:41 by jrintala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 1;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i - 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}