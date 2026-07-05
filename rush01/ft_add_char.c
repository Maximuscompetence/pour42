/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hazhang <hazhang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 14:56:00 by hazhang           #+#    #+#             */
/*   Updated: 2026/07/05 17:40:40 by hazhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_unique(char **board, int row, int col, char n);
int	ft_check_top(char **board, int *border, int col);
int	ft_check_left(char **board, int *border, int row);

int	ft_add_char(char **board, int *border, int row, int col)
{
	char	n;

	if (row == 4)
		return (1);
	if (col == 4)
		return (ft_add_char(board, border, row + 1, 0));
	n = '1';
	while (n <= '4')
	{
		if (ft_is_unique(board, row, col, n))
		{
			board[row][col] = n;
			if (ft_check_top(board, border, col)
				&& ft_check_left(board, border, row))
			{
				if (ft_add_char(board, border, row, col + 1))
					return (1);
			}
			board[row][col] = '0';
		}
		n++;
	}
	return (0);
}
