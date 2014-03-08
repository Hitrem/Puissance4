/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 22:30:47 by raudiber          #+#    #+#             */
/*   Updated: 2014/03/07 23:49:25 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

/* Affichage de la grille, chaque case separee par des espaces */

void	ft_print_grid(char **grid, int p)
{
	int		x;
	int		y;

	if (p)
		ft_putendl("Au tour de l'humain, entre la colonne de ton choix :");
	else if (!p)
		ft_putendl("Au tour de l'ordinateur.\n");
	x = 0;
	while (grid[x])
	{
		y = 0;
		while (grid[x][y])
		{
			ft_putchar(grid[x][y]);
			if (grid[x][y + 1] == '\0')
			{
				write(1, "\n", 1);
				break;
			}
			write(1, " ", 1);
			y++;
		}
		x++;
	}
	write(1, "\n", 1);
}