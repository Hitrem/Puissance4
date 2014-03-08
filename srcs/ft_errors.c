/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:45:36 by raudiber          #+#    #+#             */
/*   Updated: 2014/03/07 22:51:31 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

/* Verification du type des parametres */

int		ft_check_param(char *param)
{
	int index;

	index = 0;
	while (param[index])
	{
		if (!ft_isdigit(param[index]))
			return (1);
		index++;
	}
	return (0);
}

/* Affichage des erreurs sur sortie adequate + exit */

void	ft_errors(int error)
{
	if (error == 1)
		ft_putendl_fd("Error : too few or too many parameters.", 2);
	else if (error == 2)
		ft_putendl_fd("Error : wrong type of parameters.", 2);
	else if (error == 3)
		ft_putendl_fd("Error : allocation error.", 2);
	else if (error == 4)
		ft_putendl_fd("Error : wrong grid size.", 2);
	exit(1);
}