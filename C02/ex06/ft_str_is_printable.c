/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 16:02:41 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/06 17:04:01 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	int	i;

	i = ft_str_is_printable("UDHV9S77V7");
	printf("%d",i);
}*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32) || (str[i] > 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
