/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_correct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daechoi <daechoi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 20:31:41 by daechoi           #+#    #+#             */
/*   Updated: 2021/09/18 23:39:29 by daechoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_up_is_correct(int x, int y, int **arr, int *input)
{
	int	temp;
	int	cnt;
	int	i;

	temp = -1;
	i = 0;
	cnt = 0;
	while (++i <= n)
	{
		if (arr[i][y] > temp)
		{
			temp = arr[i][y];
			cnt++;
		}
	}
	if (cnt != input[y - 1])
		return (0);
	return (1);
}

int	ft_down_is_correct(int x, int y, int **arr, int *input)
{
	int	temp;
	int	cnt;
	int	i;

	temp = -1;
	i = 0;
	cnt = 0;
	while (++i <= n)
	{
		if (arr[n - i + 1][y] > temp)
		{
			temp = arr[n - i + 1][y];
			cnt++;
		}
	}
	if (cnt != input[n + y - 1])
		return (0);
	return (1);
}

int	ft_left_is_correct(int x, int y, int **arr, int *input)
{
	int	temp;
	int	cnt;
	int	i;

	temp = -1;
	i = 0;
	cnt = 0;
	while (++i <= n)
	{
		if (arr[x][i] > temp)
		{
			temp = arr[x][i];
			cnt++;
		}
	}
	if (cnt != input[n * 2 + x - 1])
		return (0);
	return (1);
}

int	ft_right_is_correct(int x, int y, int **arr, int *input)
{
	int	temp;
	int	cnt;
	int	i;

	temp = -1;
	i = 0;
	cnt = 0;
	while (++i <= n)
	{
		if (arr[x][n - i + 1] > temp)
		{
			temp = arr[x][n - i + 1];
			cnt++;
		}
	}
	if (cnt != input[n * 3 + x - 1])
		return (0);
	return (1);
}

int	ft_is_correct(int x, int y, int **arr, int *input)
{
	if (ft_up_is_correct(x, y, arr, input) == 0)
		return (0);
	if (ft_down_is_correct(x, y, arr, input) == 0)
		return (0);
	if (ft_left_is_correct(x, y, arr, input) == 0)
		return (0);
	if (ft_right_is_correct(x, y, arr, input) == 0)
		return (0);
	return (1);
}
