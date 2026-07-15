/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:55:00 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/15 14:15:23 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	x;
	int	i;

	x = min;
	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	arr = malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (0);
	while (i < max - min)
	{
		arr[i] = x;
		i++;
		x++;
	}
	range[0] = arr;
	return (max - min);
}

/*int	main (void)
{
	int	*result;
	int	i;

	i = 0;
	ft_ultimate_range(&result, -5, 10);
	while (i < 15)
	{
		printf ("%d ", result[i]);
		i++;
	}
	free(result);
	return (0);
}*/