/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrintala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:02:21 by jrintala          #+#    #+#             */
/*   Updated: 2022/07/07 14:30:22 by jrintala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN");
	if (hour > 0 && hour < 11)
		printf (" %d.00 A.M. AND %d.00 A.M.\n", hour, hour +1);
	else if (hour == 0)
		printf (" %d.00 A.M. AND %d.00 A.M.\n", hour, hour +1);
	else if (hour == 11)
		printf(" %d.00 A.M. AND %d.00 P.M.\n", hour, hour +1);
	else if (hour > 12 && hour < 23)
	{
		hour = hour - 12;
		printf(" %d.00 P.M. AND %d.00 P.M.\n", hour, hour +1);
	}
	else if (hour == 23)
	{
		hour = hour - 12;
		printf(" %d.00 P.M. AND %d.00 P.M.\n", hour, hour +1);
	}
	else if (hour == 12)
		printf(" %d.00 P.M. AND %d.00 P.M.\n", hour, hour -11);
}
