/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 17:43:10 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/04 19:44:03 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main(int argc, char **argv)
{
    char **tab;

    tab = cretab();
    if (tab == NULL)
        return 1;

    rmtab(tab);

    return 0;
}