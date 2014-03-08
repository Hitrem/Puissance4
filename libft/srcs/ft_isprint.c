/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:40:33 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:57:55 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int ft_isprint(int c)
{
	if ((c >= ' ') && (c <= '~'))
		return (1);
	else
		return (0);
}
