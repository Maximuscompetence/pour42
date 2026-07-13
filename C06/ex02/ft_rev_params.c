/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 19:23:01 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/13 15:18:18 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	x;

	if (argc < 2)
		return (0);
	while (argc > 1)
	{
		x = 0;
		while (argv[argc - 1][x] != '\0')
		{
			write (1, &argv[argc - 1][x], 1);
			x++;
		}
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
