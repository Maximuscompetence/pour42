/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 21:05:56 by nparolin          #+#    #+#             */
/*   Updated: 2026/06/30 12:37:58 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tableau[3] = {1,2,3};
	int	i = 0;
	int	x = 3;

	 
	ft_rev_int_tab(tableau,x);
	while(i != 3)
	{
		printf("%d",*(tableau + i));
		i++;
	}
	return (0);
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	l;
	int	r;
	int	temp;

	l = 0;
	r = size - 1;
	while (l < r)
	{
		temp = tab[l];
		tab[l] = tab[r];
		tab[r] = temp;
		l++;
		r--;
	}
}
