/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 10:48:18 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 15:39:20 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "countwords_tests.h"

int		countwords_launcher(void)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("----- COUNTWORDS -----", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_test_1", &basic_test_1);
	ft_load_test(&test, "basic_test_2", &basic_test_2);
	ft_load_test(&test, "basic_test_3", &basic_test_3);
	ft_load_test(&test, "emptyline", &emptyline);
	ft_load_test(&test, "emptychar", &emptychar);
	ft_load_test(&test, "bothempty", &bothempty);
	ft_load_test(&test, "null", &null);
	return (ft_launch_tests(&test));
}


