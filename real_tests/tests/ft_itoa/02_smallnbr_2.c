/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_smallnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 11:43:53 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 12:17:14 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int		smallnbr_2(void)
{
	char	*rslt;

	if (ft_strcmp((rslt = ft_itoa(42)), "42") == 0)
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
