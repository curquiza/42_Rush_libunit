/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_1empty_1ok.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 13:44:37 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 17:28:09 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int		empty_ok(void)
{
	char	*rslt;

	rslt = ft_strjoin("", "Hello");
	if (ft_strcmp(rslt, "Hello") == 0)
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
