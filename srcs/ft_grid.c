/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 21:50:25 by raudiber          #+#    #+#             */
/*   Updated: 2014/03/07 22:48:55 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

// Initialisation de la grille (malloc sur x , sur y et remplissage par des O).

char	**ft_init_grid(int x, int y)
{
	char 	**grid;
	int		index;

	grid = (char**)malloc(sizeof(char*) * (x + 1));

	if (!grid)
		ft_errors(3);
	index = 0;
	while (index < x)
	{
		grid[index] = ft_newline(y);
		index++;
	}
	return (grid);
}

char	*ft_newline(size_t size)
{
	char 		*line;
	size_t 		index;

	index = 0;
	line = (char*)malloc(sizeof(char) * (size + 1));
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