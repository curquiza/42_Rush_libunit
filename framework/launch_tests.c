/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:35:40 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/11 19:45:12 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		ft_testlen(t_test *lst)
{
	int		cpt;

	cpt = 0;
	while (lst)
	{
		cpt++;
		lst = lst->next;
	}
	return (cpt);
}

void	ft_putrslt(t_test *test)
{
	ft_putstr(">> ");
	ft_putstr(test->name);
	ft_putstr(" : ");
	if (test->sigret == SIGSEGV)
		ft_putendl("[SEGV]");
	else if (test->sigret == SIGBUS)
		ft_putendl("[BUSE]");
	else if (test->success == -1)
		ft_putendl("[KO]");
	else
		ft_putendl("[OK]");
}

void	ft_putnbrtests(t_test *test, int cnt)
{
	ft_putnbr(cnt);
	ft_putstr("/");
	ft_putnbr(ft_testlen(test));
	ft_putendl(" tests checked");
}

void	ft_ret_analysis(t_test *test, int status)
{
	if (WIFEXITED(status))
	{
		test->sigret = 0;
		if (WEXITSTATUS(status) != 0)
			test->success = -1;
		else
			test->success = 0;
	}
	if (WIFSIGNALED(status) == 1)
	{
		test->sigret = status;
		test->success = -1;
	}
}

int		ft_launch_tests(t_test **test)
{
	pid_t	process;
	int		status;
	t_test	*tmp;
	int		cnt;

	cnt = 0;
	tmp = *test;
	while (tmp)
	{
		status = 0;
		process = fork();
		if (process > 0)
		{
			wait(&status);
			ft_ret_analysis(tmp, status);
			ft_putrslt(tmp);
		}
		else
			exit(tmp->fct());
		tmp->success == 0 ? cnt++ : 0;
		tmp = tmp->next;
	}
	ft_putnbrtests(*test, cnt);
	return (cnt != ft_testlen(*test) ? -1 : 0);
}
