/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 15:21:22 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/11 16:52:08 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

/*void main (void)
{
	printf("%d",ft_recursive_factorial(5));
}*/