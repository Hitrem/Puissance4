/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:48:39 by raudiber          #+#    #+#             */
/*   Updated: 2014/03/08 06:35:56 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int 	len;
	int 	index;

	len = 0;
	index = 0;
	if (!*s2)
		return ((char*)s1);
	while (s1[index] != '\0')
	{
		len = 0;
		while (s1[index + len] == s2[len] && s2[len])
			len++;
		if (s2[len] == '\0')
			return ((char*)s1 + index);
		index++;
	}
	return (NULL);
}
