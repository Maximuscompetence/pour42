/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 16:09:23 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/01 18:48:24 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

void main (void)
{
	char	tableau[6] = "salut";
	char	result[6];
	unsigned int	x = 3;
	int	i = 0;

	ft_strncpy(result,tableau,x);
	while(i != x)
	{
		printf("%c",result[i]);
		i++;
	}

}*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i != n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
