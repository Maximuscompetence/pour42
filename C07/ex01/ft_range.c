/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 13:15:44 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/14 15:33:45 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int	*result;
	int	i;
	
	i = 0;
	if (max <= min)
		return (NULL);
	result = malloc(sizeof (int) * (max - min));
	if (result == 0)
		return (0);
	while (min + i < max)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
/*int	main (void)
{
	int	*tab;
	int	i;

	tab = ft_range(-10,5);
	i = 0;
	while (i < 15)
	{
		printf ("%d ", tab[i]);
		i++;
	}
	
	
	free (tab);
	return (0);
}*/
