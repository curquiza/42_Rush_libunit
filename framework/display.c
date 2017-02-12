/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 16:38:36 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 17:03:28 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	ft_putname(t_test *test)
{
	ft_putstr(">> ");
	ft_putstr(test->name);
	ft_putstr(" : ");
}

void	ft_putrslt(t_test *test)
{
	if (test->sigret == SIGSEGV)
		ft_putendl_col("[SEGV]", RED, DEF);
	else if (test->sigret == SIGBUS)
		ft_putendl_col("[BUSE]", RED, DEF);
	else if (test->sigret == SIGALRM)
		ft_putendl_col("[TIMEOUT]", RED, DEF);
	else if (test->sigret == SIGABRT)
		ft_putendl_col("[ABORT]", RED, DEF);
	else if (test->success == -1)
		ft_putendl_col("[KO]", RED, DEF);
	else
		ft_putendl_col("[OK]", GREEN, DEF);
}

void	ft_putnbrtests(t_test *test, int cnt)
{
	ft_putendl("");
	if (cnt == ft_testlen(test))
	{
		ft_putnbr_col(cnt, B_GREEN, DEF);
		ft_putstr_col("/", B_GREEN, DEF);
		ft_putnbr_col(ft_testlen(test), B_GREEN, DEF);
		ft_putendl_col(" tests checked", B_GREEN, DEF);
	}
	else
	{
		ft_putnbr_col(cnt, B_RED, DEF);
		ft_putstr_col("/", B_RED, DEF);
		ft_putnbr_col(ft_testlen(test), B_RED, DEF);
		ft_putendl_col(" tests checked", B_RED, DEF);
	}
}
