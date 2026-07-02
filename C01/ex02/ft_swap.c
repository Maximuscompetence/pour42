/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 12:03:25 by nparolin          #+#    #+#             */
/*   Updated: 2026/06/29 17:35:54 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void	ft_swap(int *a, int *b);

int	main (void)
{
	int	c;
	int	b;
	int*	cp;
	int*	bp;

	c = 2;
	d = 4;
	cp = &c;
	bp = &b;
	ft_swap(&cp, &bp);
}*/

void	ft_swap(int *a, int *b)
{
	int	e;

	e = *a;
	*a = *b;
	*b = e;
}
