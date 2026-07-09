/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 13:04:34 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/06 17:01:44 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main (void)
{
	char tab[50] = "isfgkjhelkv";
	char copi[50];
	int i = 0;
	 
	ft_strcpy(copi, tab);
	while(copi[i])
	{
		printf("%c",copi[i]);
		i++;
	}
	return (0);
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
