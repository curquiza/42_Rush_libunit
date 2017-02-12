/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 10:48:18 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 18:34:14 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "countwords_tests.h"

int		countwords_launcher(void)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("----- COUNTWORDS -----", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "Basic test 1", &basic_test_1);
	ft_load_test(&test, "basic test 2", &basic_test_2);
	ft_load_test(&test, "Basic test 3", &basic_test_3);
	ft_load_test(&test, "Empty line", &emptyline);
	ft_load_test(&test, "Emmpty char", &emptychar);
	ft_load_test(&test, "Empty line & empty char", &bothempty);
	ft_load_test(&test, "Null", &null);
	return (ft_launch_tests(&test));
}
