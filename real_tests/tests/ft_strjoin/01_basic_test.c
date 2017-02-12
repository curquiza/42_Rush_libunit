/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 13:24:39 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 17:27:16 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int		basic_test(void)
{
	char	*rslt;

	rslt = ft_strjoin("Hello ", "les gens !");
	if (ft_strcmp(rslt, "Hello les gens !") == 0)
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
