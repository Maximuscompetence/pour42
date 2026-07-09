/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 12:56:12 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/06 17:37:08 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main (void)
{
	char	det[100] = "aaa";
	ft_strcat(det,"bbb");
	printf("%s",det);
	return (0);
}*/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
		i++;
	while (src[x])
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
