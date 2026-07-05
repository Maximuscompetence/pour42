/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_input.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hazhang <hazhang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 13:16:36 by hazhang           #+#    #+#             */
/*   Updated: 2026/07/05 18:00:21 by hazhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Only number range between '1' to '4', spearted by ' ' consider as valid 
*/
int	ft_is_valid_input(char *input)
{
	int	i;

	i = 0;
	while (input[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (input[i] < '1' || input[i] > '4')
				return (0);
		}
		else
		{
			if (input[i] != ' ')
				return (0);
		}
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}
