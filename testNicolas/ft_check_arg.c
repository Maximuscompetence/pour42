/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 17:20:27 by cdaval            #+#    #+#             */
/*   Updated: 2026/07/04 18:19:41 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_check_arg(char *arg1)
{
    int i = 0;
    int j = 0;
    char *ptr;

    ptr = malloc(15 * sizeof(char));
    if (!ptr)
        return NULL;

    while (arg1[i] != '\0')
    {
        if (arg1[i] >= '0' && arg1[i] <= '9')
        {
            ptr[j] = arg1[i];
            j++;
        }
        i++;
    }
    ptr[j] = '\0';
    return ptr;
}
