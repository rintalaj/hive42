/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrintala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:42:47 by jrintala          #+#    #+#             */
/*   Updated: 2022/07/12 16:25:43 by jrintala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	laskuri;

	i = 0;
	laskuri = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
		laskuri ++;
		i++;
	}
	return (laskuri);
}