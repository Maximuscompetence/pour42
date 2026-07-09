/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hazhang <hazhang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 15:14:44 by hazhang           #+#    #+#             */
/*   Updated: 2026/07/05 17:55:22 by hazhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_create_board(void);
void	ft_free_board(char **board);
int		*ft_create_border(char *str);
int		ft_add_char(char **board, int *border, int row, int col);
void	ft_error(void);
void	ft_print_board(char **board);

void	ft_start(char *input)
{
	char	**board;
	int		*border;

	board = ft_create_board();
	border = ft_create_border(input);
	if (!board || !border)
	{
		if (!board)
			ft_free_board(board);
		else
			free(border);
		ft_error();
		return ;
	}
	if (!ft_add_char(board, border, 0, 0))
	{
		ft_error();
		ft_free_board(board);
		free(border);
		return ;
	}
	ft_print_board(board);
	ft_free_board(board);
	free(border);
}
