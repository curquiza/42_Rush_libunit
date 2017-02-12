/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_smallnbr_neg.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 12:43:10 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 13:08:18 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int		smallnbr_neg(void)
{
	char	*rslt;

	if (ft_strcmp((rslt = ft_itoa(-21)), "-21") == 0)
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
