/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 10:48:18 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 18:35:29 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "itoa_tests.h"

int		itoa_launcher(void)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("----- ITOA -----", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "Small nunmer 1", &smallnbr_1);
	ft_load_test(&test, "Small number 2", &smallnbr_2);
	ft_load_test(&test, "Medium number", &mediumnbr);
	ft_load_test(&test, "Limit inf", &limitinf);
	ft_load_test(&test, "Limit sup", &limitsup);
	ft_load_test(&test, "Zero", &zero);
	ft_load_test(&test, "Small negativ number", &smallnbr_neg);
	ft_load_test(&test, "Medium negativ number", &mediumnbr_neg);
	return (ft_launch_tests(&test));
}
