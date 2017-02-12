/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_1ok_1empty.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 13:47:27 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 17:28:16 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int		ok_empty(void)
{
	char	*rslt;

	rslt = ft_strjoin("Hello", "");
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
