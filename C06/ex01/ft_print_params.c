/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 17:26:21 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/13 15:18:07 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	i;

	x = 0;
	i = 1;
	(void)argc;
	while (argv[i])
	{
		while (argv[i][x])
		{
			write (1, &argv[i][x], 1);
			x++;
		}
		write (1, "\n", 1);
		x = 0;
		i++;
	}
	return (0);
}
