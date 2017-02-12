/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_big_lines.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 13:32:37 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 17:29:12 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int		big_lines(void)
{
	char	*rslt;

	rslt = ft_strjoin("J'me présente je m'appelle Henri, j'voudrais bien ",
			"reussir ma vie, être aiméééééééééééééééééééééééééééééééééé !");
	if (ft_strcmp(rslt, "J'me présente je m'appelle Henri, "
				"j'voudrais bien reussir ma vie, "
				"être aiméééééééééééééééééééééééééééééééééé !") == 0)
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
