/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 20:15:21 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/02 13:47:51 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

void main (void)
{
	int	result;
	char	m1[] = "sal";
	char	m2[] = "sal";
	result = ft_strcmp (m1 , m2);
	printf ("%d",result);

}*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	x;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	x = s1[i] - s2[i];
	return (x);
}
