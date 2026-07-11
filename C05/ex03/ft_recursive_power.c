/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 17:19:08 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/11 17:35:02 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);

	return nb * ft_recursive_power(nb, power - 1);
}
/*int main (void)
{
	printf ("%d",ft_recursive_power(3,2));
	return (0);
}*/
