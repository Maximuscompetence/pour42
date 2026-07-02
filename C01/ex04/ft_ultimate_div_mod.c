/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 15:22:20 by nparolin          #+#    #+#             */
/*   Updated: 2026/06/27 15:45:02 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main (void)
{
	int	x;
	int	z;
	int	*v;
	int	*w;

	x = 7;
	z = 2;
	v = &x;
	w = &z;
	ft_ultimate_div_mod( v, w);

	printf ("%d et %d\n",x,z);
}*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}
