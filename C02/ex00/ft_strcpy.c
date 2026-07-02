/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                         :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 13:04:34 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/01 18:46:05 by nparolin       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

void main (void)
{
	char tab[6] = "salut";
	char copi[6];
	int i = 0;
	 
	*ft_strcpy(copi, tab);
	while(i != 6)
	{
		printf("%c",copi[i]);
		i++;
	}
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
