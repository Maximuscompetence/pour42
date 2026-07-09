/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 13:49:57 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/09 13:20:20 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	while (str[i])
	{
		if ((str[i] >= 7 && str[i] <= 47)
			&& (str[i + 1] >= 97 && str[i + 1] <= 122))
		{
			str[i + 1] = str[i + 1] - 32;
			i++;
		}
		i++;
	}
	return (str);
}

/*int	main (void)
{
	char	tab[] = "Hi, HOW are you? 42words forty-two; fifty+and+one";
	char	*tableau = ft_strcapitalize(tab);
	printf("%s",tab);
	return (0);
}*/