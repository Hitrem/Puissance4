/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:39:54 by raudiber          #+#    #+#             */
/*   Updated: 2014/03/08 09:13:16 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

int			first_player(void)
{
	int 	n;

	srand(time(NULL));
	n = (rand() % 2);
	ft_putstr("First player is : ");
	if (n == 0)
	{
		ft_putendl("the Human being.\n");	
		return (1);
	}
	else
	{
		ft_putendl("the Computer.\n");
		return (0);
	}
}

void		player_turn(t_grid **grid)
{
	char	*entry;

	entry = NULL;
	ft_putstr("Your choice : ");
	while (get_next_line(0, &entry) > 0)
	{
		if (*entry || (*entry == '\0'))
			break;
	}
	if (!ft_check_entry(entry, *grid))
	{
		if (!ft_fill_grid(grid, (ft_atoi(entry) - 1)))
			(*grid)->p = 0;
	}
	else
		ft_putendl("Please enter a valid choice.");
	write(1, "\n", 1);
}

void		turn_loop(t_grid **grid)
{
	ft_print_grid(*grid);
	if ((*grid)->p)
	{
		player_turn(grid);
	}
	else if (!(*grid)->p)
	{
		(*grid)->p = 1;
	}
}

void		puissance4(t_grid *grid)
{
	grid->p = first_player();
	while (!grid->v)
		turn_loop(&grid);
	if (grid->v == 1)
		ft_putendl("Congratulations, you had beaten the machine.");
	else
		ft_putendl("Shame on you, you lose.");
}


/* Main + gestion d'erreur sur les parametres (type des parametres + verification)
   puis remplissage de la grille et demarrage du jeux */

int			main(int argc, char **argv)
{
	t_grid		*grid;

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