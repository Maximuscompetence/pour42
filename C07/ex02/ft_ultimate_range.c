/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:55:00 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/14 18:57:17 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	x;
	int	i;

	x = min;
	i = 0;
	printf ("X");
	if (max <= min)
	{
		range = NULL;
		return 0;
	}
	printf ("X");
	range = malloc(sizeof *range *1);
	range = malloc(sizeof **range *(max - min));
	if (range == NULL)
		return (0);
	while (i < max - min)
	{
		range[0][i] = x;
		i++;
		x++;
	}
	return (max - min);
}
int	main (void)
{
	int	**result;
	int	i;

	i = 0;
	ft_ultimate_range(result,5,10);
	while (i < 5 -10)
	{
		printf ("%d",result[0][i]);
		i++;
	}
	
	return (0);
}
