/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:25:53 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 15:25:55 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int		basic_test_3(void)
{
	if (ft_countwords("    Hello     les       cocos      ", ' ') == 3)
		return (0);
	else
		return (-1);
}
