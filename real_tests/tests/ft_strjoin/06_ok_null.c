/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_1ok_1null.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 13:48:51 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 17:28:23 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int		ok_null(void)
{
	char	*rslt;

	rslt = ft_strjoin("Hello", NULL);
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
