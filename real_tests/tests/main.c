/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 10:37:41 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 20:09:47 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int		main(void)
{
	int		cnt;

	cnt = 0;
	ft_putendl("");
	ft_putendl_col("***********************************", B_YELLOW, DEF);
	ft_putendl_col("********** LIBFT - TESTS **********", B_YELLOW, DEF);
	ft_putendl_col("***********************************", B_YELLOW, DEF);
	ft_putendl("");
	cnt = cnt + itoa_launcher();
	ft_putendl("");
	ft_putendl("");
	sleep(1);
	cnt = cnt + strjoin_launcher();
	ft_putendl("");
	ft_putendl("");
	sleep(1);
	cnt = cnt + countwords_launcher();
	ft_putendl("");
	if (cnt < 0)
	{
		ft_putendl_col(">>>>> FAIL <<<<<", B_RED, DEF);
		ft_putendl("");
		return (-1);
	}
	ft_putendl_col(">>>>> SUCCESS <<<<<", B_GREEN, DEF);
	ft_putendl("");
	return (0);
}
