/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_limitinf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 12:20:05 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 12:41:50 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int		limitinf(void)
{
	char	*rslt;

	if (ft_strcmp((rslt = ft_itoa(-2147483648)), "-2147483648") == 0)
	{
		free(rslt);
		return (0);
	}
	else
	{
		free(rslt);
		return (-1);
	}
}
