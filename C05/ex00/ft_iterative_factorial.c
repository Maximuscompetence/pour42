/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 14:14:07 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/11 15:54:28 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 2;
	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	
	while ((nb + 1) != i)
	{
		result	= result * i;
		i++;
	}
	return (result);
}
/*int	main (void)
{
	printf("%d",ft_iterative_factorial(0));
}*/