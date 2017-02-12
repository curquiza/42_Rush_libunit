/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_zero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 12:42:03 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 12:42:31 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int		zero(void)
{
	char	*rslt;

	if (ft_strcmp((rslt = ft_itoa(0)), "0") == 0)
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
