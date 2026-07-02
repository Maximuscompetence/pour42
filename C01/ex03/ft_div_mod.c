/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 13:55:13 by nparolin          #+#    #+#             */
/*   Updated: 2026/06/27 15:06:18 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main (void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	*cal;
	int	*rest;

	a = 7;
	b = 2;
	cal = &c;
	rest = &d;
	ft_div_mod( a, b, cal, rest);

	printf ("le resultat est %d et le reste est de %d\n",c,d);
}*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
