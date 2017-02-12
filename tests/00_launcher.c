/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:38:06 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 17:17:29 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int		tests_launcher(void)
{
	t_test	*test;

	test = NULL;
	ft_load_test(&test, "Test OK", &tests_ok);
	ft_load_test(&test, "Test KO", &tests_ko);
	ft_load_test(&test, "Test SegFault", &tests_segflt);
	ft_load_test(&test, "Test Bus Error", &tests_buse);
	ft_load_test(&test, "Test Timeout", &tests_timeout);
	ft_load_test(&test, "Test Abort", &tests_abort);
	return (ft_launch_tests(&test));
}
