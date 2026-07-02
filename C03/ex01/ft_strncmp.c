/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 14:00:32 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/02 15:58:12 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

void	main (void)
{
	int	result;
	int	n = 3;
	char	tab1[] = "salut";
	char	tab2[] = "salot";
	result = ft_strncmp(tab1, tab2, n);
	printf ("%d",result);
}*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n &&s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}