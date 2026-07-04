/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 14:00:09 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/04 19:49:33 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char** cretab (void)
{
	int	i;
	


	i = 0;	
	char	**tab;
	
	tab = malloc(sizeof *tab * 5);
	tab[0] = malloc(sizeof **tab * 5);
	tab[1] = malloc(sizeof **tab * 5);
	tab[2] = malloc(sizeof **tab * 5);
	tab[3] = malloc(sizeof **tab * 5);

	// if (tab == NULL)
		// return (-1);
	
	i = 0;
	while (i != 4)
	{
		write (1,tab[i],4);
		write (1,"\n",1);
		i++;
	}
	/*free(tab);*/
	return tab;
}

