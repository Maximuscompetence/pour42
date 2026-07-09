/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 17:52:09 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/09 20:03:51 by nparolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (base[i])
	{
		x = i++;
		while (base[x])
		{
			if(base[x] != base[i])
			{
				x++;
			}
			else
			{
				return (0);
			}
		i++;	
		}	
	}
	return (1);
}

ft_putnbr (char *sortie)
{

}

void	ft_putnbr_base(int nbr, char *base)
{
	int	taille_base;
	int	rp;
	int	i;
	long int	nb;

	taille_base = 0;
	rp = check_base(base);
	i = 0;
	nb = nbr;
	if (rp == 0)
	{
		write(1,"erreur",7);
		return ;
	}
	while (base[taille_base])
	{
		taille_base++;
	}
	if (nbr < 0)
	{
		write (1,"-",1);
	}
	if (nb >= taille_base)
	{
		
	}
	
}


void	main (void)
{
	ft_putnbr_base(6, "01");
}

