/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:39:54 by raudiber          #+#    #+#             */
/*   Updated: 2014/03/07 23:46:33 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

int		first_player(void)
{
	int 	n;

	srand(time(NULL));
	n = (rand() % 2);
	ft_putstr("Le premier joueur est : ");
	if (n == 0)
	{
		ft_putendl("l'humain.\n");	
		return (1);
	}
	else
	{
		ft_putendl("l'ordinateur.\n");
		return (0);
	}
}


void	player_turn(char ***grid, )
{
	ft_check_choice(choice)
}

void	puissance4(char **grid)
{
	int		p;
	int		v;
	char	*entry;

	p = first_player();
	v = 0;
	entry = NULL;
	while (!v)
	{
		ft_strclr(entry);
		if (p)
		{
			ft_print_grid(grid, p);
			while (get_next_line(0, &entry) > 0)
			{
				if (*entry)
					break;
			}
			
			p = 0;
		}
		else if (!p)
		{
			ft_print_grid(grid, p);
			p = 1;
		}
	}
}


/* Main + gestion d'erreur sur les parametres (type des parametres + verification)
   puis remplissage de la grille et demarrage du jeux */

int		main(int argc, char **argv)
{
	char **grid;

	if (argc != 3)
		ft_errors(1);
	if (ft_check_param(argv[1]) || ft_check_param(argv[2]))
		ft_errors(2);
	if (ft_atoi(argv[1]) < 6 || ft_atoi(argv[2]) < 7)
		ft_errors(4);
	grid = ft_init_grid(ft_atoi(argv[1]), ft_atoi(argv[2]));
	puissance4(grid);
	return (0);
}