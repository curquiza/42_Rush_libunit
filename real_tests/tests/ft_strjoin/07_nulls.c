/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_2nulls.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 13:49:17 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 17:28:28 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int		nulls(void)
{
	char	*rslt;

	rslt = ft_strjoin(NULL, NULL);
	if (rslt == NULL)
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
