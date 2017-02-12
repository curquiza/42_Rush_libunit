/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:21:40 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 15:24:23 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int		basic_test_1(void)
{
	if (ft_countwords("Hello les cocos", ' ') == 3)
		return (0);
	else
		return (-1);
}
