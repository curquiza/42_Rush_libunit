/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 10:48:18 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 17:25:33 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "itoa_tests.h"

int		itoa_launcher(void)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("----- ITOA -----", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "smallnbr_1 -> 4", &smallnbr_1);
	ft_load_test(&test, "smallnbr_2 -> 42", &smallnbr_2);
	ft_load_test(&test, "mediumnbr -> 45781", &mediumnbr);
	ft_load_test(&test, "limitinf -> -2147483648", &limitinf);
	ft_load_test(&test, "limitsup -> 2147483647", &limitsup);
	ft_load_test(&test, "zero -> 0", &zero);
	ft_load_test(&test, "smallnbr_neg -> -21", &smallnbr_neg);
	ft_load_test(&test, "mediumnbr_neg -> -21426", &mediumnbr_neg);
	return (ft_launch_tests(&test));
}
