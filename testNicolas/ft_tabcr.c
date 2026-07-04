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

char** cretab(void)
{
    int     i;
    char    **tab;

    i = 0;

    tab = malloc(sizeof *tab * 4);
    if (tab == NULL)
        return NULL;

    tab[0] = malloc(sizeof **tab * 4);
    tab[1] = malloc(sizeof **tab * 4);
    tab[2] = malloc(sizeof **tab * 4);
    tab[3] = malloc(sizeof **tab * 4);

    return tab;
}

