/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 10:48:18 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 14:58:40 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strjoin_tests.h"

int		strjoin_launcher(void)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("----- STRJOIN -----", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_test", &basic_test);
	ft_load_test(&test, "big_lines", &big_lines);
	ft_load_test(&test, "empty_ok", &empty_ok);
	ft_load_test(&test, "ok_empty", &ok_empty);
	ft_load_test(&test, "null_ok", &null_ok);
	ft_load_test(&test, "ok_null", &ok_null);
	ft_load_test(&test, "nulls", &nulls);
	ft_load_test(&test, "empty", &empty);
	return (ft_launch_tests(&test));
}


