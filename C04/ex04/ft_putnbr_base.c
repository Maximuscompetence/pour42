/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nparolin <nparolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 17:52:09 by nparolin          #+#    #+#             */
/*   Updated: 2026/07/10 13:56:34 by nparolin         ###   ########.fr       */
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
			if (base[x] != base[i])
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

void	ft_putchar(char *sortie)
{
	write (1,&sortie,1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	taille_base;
	int	i;
	int	nb;
	int	rp;

	taille_base = 0;
	i = 0;
	nb = nbr;
	rp = check_base(base);
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
		nb++;
	}
	if (nb >= taille_base)
	{
		ft_putnbr_base (nb / taille_base, base);
		ft_putnbr_base (nb % taille_base, base);
	}
	/*else
	{
		ft_putchar(nb ,base);
	}*/
}
/*void	main (void)
{
	ft_putnbr_base(1, "01");
}*/
