/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrintala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:07:59 by jrintala          #+#    #+#             */
/*   Updated: 2022/07/12 15:47:33 by jrintala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != '\0' && *tab[i] != '0')
	{
		if (f(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}
