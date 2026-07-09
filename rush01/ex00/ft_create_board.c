/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_board.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hazhang <hazhang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 13:50:54 by hazhang           #+#    #+#             */
/*   Updated: 2026/07/05 16:06:33 by hazhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
	create a 4 x 4 board, with all the cell filled with '0'
*/
char	**ft_create_board(void)
{
	char	**board;
	int		row;
	int		col;

	row = 0;
	board = malloc(sizeof(char *) * 4);
	if (!board)
		return (0);
	while (row < 4)
	{
		board[row] = malloc(sizeof(char) * 4);
		if (!board[row])
			return (0);
		col = 0;
		while (col < 4)
		{
			board[row][col] = '0';
			col++;
		}
		row++;
	}
	return (board);
}

void	ft_free_board(char **board)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		free(board[row]);
		row++;
	}
	free(board);
}
