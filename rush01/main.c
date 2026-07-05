/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hazhang <hazhang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 15:30:16 by hazhang           #+#    #+#             */
/*   Updated: 2026/07/05 15:34:04 by hazhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_start(char *input);
void	ft_error(void);
int		ft_is_valid_input(char *input);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_error();
		return (1);
	}
	if (!ft_is_valid_input(argv[1]))
	{
		ft_error();
		return (1);
	}
	ft_start(argv[1]);
	return (0);
}
