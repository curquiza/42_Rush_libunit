/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_1null_1ok.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 13:48:02 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 14:53:25 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
# include "libft.h"

int		null_ok(void)
{
	char	*rslt;
	rslt = ft_strjoin(NULL, "Hello");
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
