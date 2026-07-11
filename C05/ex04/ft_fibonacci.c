/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 17:37:54 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/11 18:45:26 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index) 
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int	main(void)
{
	printf("%d", ft_fibonacci(11));
}
