/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_smallnbr_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 10:52:45 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 12:46:25 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
# include "libft.h"

int		smallnbr_1(void)
{
	char	*rslt;

	if (ft_strcmp((rslt = ft_itoa(4)), "4") == 0)
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
