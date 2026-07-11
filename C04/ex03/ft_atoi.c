/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 13:06:39 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/10 14:41:21 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	equi;
	int	i;

	i = 0;
	result = 0;
	equi = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			equi *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * equi);
}

int	main (void)
{
	int	result;
	char	*ptr = "---+--+1234ab567";

	result = ft_atoi(ptr);
	printf ("%d",result);
	return 0;
}
