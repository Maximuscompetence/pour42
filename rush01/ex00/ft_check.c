/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hazhang <hazhang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 12:16:14 by hazhang           #+#    #+#             */
/*   Updated: 2026/07/05 17:37:54 by hazhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_bottom(char **board, int *border, int col);
int	ft_check_right(char **board, int *border, int row);

/*
	boder index from 0 to 3, is the top side
	valid only when all the cells in col is fulfilled
*/
int	ft_check_top(char **board, int *border, int col)
{
	int	i;
	int	max;
	int	visible;

	i = 0;
	max = '0';
	visible = 0;
	if (board[3][col] == '0')
		return (1);
	while (i < 4)
	{
		if (board[i][col] > max)
		{
			max = board[i][col];
			visible++;
		}
		i++;
	}
	if (visible != border[col])
		return (0);
	return (ft_check_bottom(board, border, col));
}

/*
	boder index from 4 to 7, is the bottom side
*/
int	ft_check_bottom(char **board, int *border, int col)
{
	int	i;
	int	max;
	int	visible;

	i = 3;
	max = '0';
	visible = 0;
	while (i >= 0)
	{
		if (board[i][col] > max)
		{
			max = board[i][col];
			visible++;
		}
		i--;
	}
	if (visible != border[col + 4])
		return (0);
	return (1);
}

/*
	boder index from 8 to 11, is the left side
	valid only when all the cells in row is fulfilled
*/
int	ft_check_left(char **board, int *border, int row)
{
	int	i;
	int	max;
	int	visible;

	i = 0;
	max = '0';
	visible = 0;
	if (board[row][3] == '0')
		return (1);
	while (i < 4)
	{
		if (board[row][i] > max)
		{
			max = board[row][i];
			visible++;
		}
		i++;
	}
	if (visible != border[row + 8])
		return (0);
	return (ft_check_right(board, border, row));
}

/*
	boder index from 12 to 15, is the right side
*/
int	ft_check_right(char **board, int *border, int row)
{
	int	i;
	int	max;
	int	visible;

	i = 3;
	max = '0';
	visible = 0;
	while (i >= 0)
	{
		if (board[row][i] > max)
		{
			max = board[row][i];
			visible++;
		}
		i--;
	}
	if (visible != border[row + 12])
		return (0);
	return (1);
}
