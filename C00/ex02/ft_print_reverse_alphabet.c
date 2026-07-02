/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 12:13:33 by nparolin          #+#    #+#             */
/*   Updated: 2026/06/25 12:59:55 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_print_reverse_alphabet(void);

int	main(void)
{
	ft_print_reverse_alphabet();
}*/

void	ft_print_reverse_alphabet(void)
{
	int	alphabet;

	alphabet = 122;
	while (alphabet >= 97)
	{
		write (1, &alphabet, 1);
		alphabet--;
	}
}
