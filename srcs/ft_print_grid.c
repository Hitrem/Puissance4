/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 22:30:47 by raudiber          #+#    #+#             */
/*   Updated: 2014/03/08 08:11:22 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

/* Affichage de la grille, chaque case separee par des espaces */

void	ft_print_grid(t_grid *grid)
{
	int		x;
	int		y;

	if (grid->p)
		ft_putendl("This is the human turn, please make a choice.");
	else if (!grid->p)
		ft_putendl("This is computer turn.\n");
	x = 0;
	while (grid->g[x])
	{
		y = 0;
		while (grid->g[x][y])
		{
			ft_putchar(grid->g[x][y]);
			if (grid->g[x][y + 1] == '\0')
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