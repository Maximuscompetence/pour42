/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 18:44:11 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/14 13:10:00 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

char	*ft_strdup(char *src)
{
	int	i;
	char	*result;

	i = 0;
	while (src[i])
	{
		i++;
	}
	result = malloc(sizeof *result *(i + 1));
	i = 0;
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	if (src == NULL)
		return (0);
	else
		return (result);
}
/*int	main (void)
{
	char	*src1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()";
	char	*src2;
	src2 = ft_strdup(src1);
	printf ("%s",src2);
	free(src2);
	return (0);
}*/