/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:38:52 by raudiber          #+#    #+#             */
/*   Updated: 2014/03/08 08:07:18 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUISSANCE4_H
# define PUISSANCE4_H

# include <libft.h>
# include <time.h>

typedef struct		s_grid
{
	char			**g;
	int				x;
	int				y;
	int				p;
	int				v;
}					t_grid;

/* Fonction de gestion d'erreurs */

 void		ft_errors(int error);
 int		ft_check_param(char *param);
 int		ft_check_entry(char *entry, t_grid	*grid);

/* Fonction creation et modification de la grille */

 t_grid		*ft_init_grid(int x, int y);
 char		*ft_newline(size_t size);
 int		ft_fill_grid(t_grid **grid, int n);

/* Fonction d'affichage de la grille */

 void		ft_print_grid(t_grid *grid);

 /* Fonctions principales */

 void		puissance4(t_grid *grid);
 void		turn_loop(t_grid **grid);
 void		player_turn(t_grid **grid);

#endif /* !PUISSANCE4_H */