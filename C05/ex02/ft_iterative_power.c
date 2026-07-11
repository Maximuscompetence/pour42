/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 16:55:07 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/11 17:11:48 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int ft_iterative_power(int nb, int power)
{
	int	result;
	
	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power != 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
	
}
/*int main (void)
{
	printf ("%d",ft_iterative_power(-5,2));
	return (0);
}*/