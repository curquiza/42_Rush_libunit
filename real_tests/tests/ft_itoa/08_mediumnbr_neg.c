/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_mediumnbr_neg.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 12:45:07 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 13:08:20 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int		mediumnbr_neg(void)
{
	char	*rslt;

	if (ft_strcmp((rslt = ft_itoa(-21426)), "-21426") == 0)
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
