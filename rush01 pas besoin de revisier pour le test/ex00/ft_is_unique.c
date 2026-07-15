/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_unique.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hazhang <hazhang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 13:29:48 by hazhang           #+#    #+#             */
/*   Updated: 2026/07/05 16:48:19 by hazhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	valid whether the number meets the requirements:
	1. no duplication in the row
	2. no duplication in the col
*/
int	ft_is_unique(char **board, int row, int col, char n)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (board[i][col] == n || board[row][i] == n)
			return (0);
		i++;
	}
	return (1);
}
