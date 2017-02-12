/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_empty.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 14:58:11 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 17:28:34 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int		empty(void)
{
	char	*rslt;

	rslt = ft_strjoin("", "");
	if (ft_strcmp(rslt, "") == 0)
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
