/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_border.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdaval  <cdaval@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 14:49:06 by cdaval            #+#    #+#             */
/*   Updated: 2026/07/05 14:49:06 by cdaval           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_create_border(char *str)
{
	int	i;
	int	j;
	int	*border;

	border = malloc(16 * sizeof(int));
	if (!border)
	{
		return (0);
	}
	i = 0;
	j = 0;
	while (i < 31)
	{
		if (i % 2 == 0)
		{
			border[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	return (border);
}
