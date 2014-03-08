/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 21:50:25 by raudiber          #+#    #+#             */
/*   Updated: 2014/03/08 09:14:10 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

// Initialisation de la grille (malloc sur x , sur y et remplissage par des O).

t_grid		*ft_init_grid(int x, int y)
{
	t_grid	*grid;
	int		index;

	grid = (t_grid*)malloc(sizeof(t_grid));
	grid->g = (char**)malloc(sizeof(char*) * (x + 1));
	grid->x = x - 1;
	grid->y = y - 1;
	grid->p = 0;
	grid->v = 0;
	if (!grid->g)
		ft_errors(3);
	index = 0;
	while (index < x)
	{
		grid->g[index] = ft_newline(y);
		index++;
	}
	return (grid);
}

char	*ft_newline(size_t size)
{
	char 		*line;
	size_t 		index;

	index = 0;
	line = (char*)malloc(sizeof(char) * (size));
	if (!line)
		ft_errors(3);
	while (index < size)
	{
		line[index] = 'O';
		index++;
	}
	line[index] = '\0';
	return (line);
}

int		ft_fill_grid(t_grid **grid, int n)
{
	int		count;

	count = 0;
	if ((*grid)->g[count][n] == 'P' || (*grid)->g[count][n] == 'C')
	{
		ft_putendl("That column is full, please make another choice.");
		return (1);
	}
	else
	{
		while ((count <= (*grid)->x) && (((*grid)->g[count][n] != 'P'
			&& (*grid)->g[count][n] != 'C')))
			count++;
	}
	if ((*grid)->p == 1)
		(*grid)->g[count - 1][n] = 'P';
	else
		(*grid)->g[count - 1][n] = 'C';
	return (0);
}