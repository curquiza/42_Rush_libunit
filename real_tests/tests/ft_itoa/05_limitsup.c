/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_limitsup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 12:41:29 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 12:41:45 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int		limitsup(void)
{
	char	*rslt;

	if (ft_strcmp((rslt = ft_itoa(2147483647)), "2147483647") == 0)
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
