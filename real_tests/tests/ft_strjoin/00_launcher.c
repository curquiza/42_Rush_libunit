/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 10:48:18 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 18:37:07 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strjoin_tests.h"

int		strjoin_launcher(void)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("----- STRJOIN -----", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "Basic test", &basic_test);
	ft_load_test(&test, "Big lines", &big_lines);
	ft_load_test(&test, "Empty - Ok", &empty_ok);
	ft_load_test(&test, "Ok - Empty", &ok_empty);
	ft_load_test(&test, "NUll - Ok", &null_ok);
	ft_load_test(&test, "Ok - Null", &ok_null);
	ft_load_test(&test, "Both nulls", &nulls);
	ft_load_test(&test, "Both empty", &empty);
	return (ft_launch_tests(&test));
}
