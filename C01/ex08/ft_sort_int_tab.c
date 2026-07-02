/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 14:56:54 by nparolin          #+#    #+#             */
/*   Updated: 2026/06/30 12:39:30 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tableau[3] = {1,2,3};
	int	i = 0;
	int	x = 3;

	ft_sort_int_tab(tableau,x);
	while(i != 3)
	{
		printf("%d",*(tableau + i));
		i++;
	}
	return (0);
}*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (i + 1 < size)
	{
		if (tab[i] > tab[i + 1])
		{
			a = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = a;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
