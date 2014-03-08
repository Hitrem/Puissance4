/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:38:52 by raudiber          #+#    #+#             */
/*   Updated: 2014/03/07 23:30:58 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUISSANCE4_H
# define PUISSANCE4_H

# include <libft.h>
# include <time.h>
# include <stdio.h>

/* Fonction de gestion d'erreurs */

 void		ft_errors(int error);
 int		ft_check_param(char *param);

/* Fonction creation de la grille */

 char		**ft_init_grid(int x, int y);
 char		*ft_newline(size_t size);

/* Fonction d'affichage de la grille */

 void		ft_print_grid(char **grid, int p);

#endif /* !PUISSANCE4_H */