/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 12:14:10 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/10 13:47:24 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[x] && x < nb)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}

/*void	main (void)
{
	char	envoi[100] = "123456789";

	ft_strncat(envoi,"123456789",5);
	printf ("%s",envoi);
}*/