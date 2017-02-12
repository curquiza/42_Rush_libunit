/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:35:40 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 17:14:50 by curquiza         ###   ########.fr       */
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
	if (status == SIGALRM || WIFSIGNALED(status) == 1)
	{
		test->sigret = status;
		test->success = -1;
	}
}

void	ft_fork(int *status, pid_t process, t_test *tmp)
{
	if (process > 0)
	{
		wait(status);
		ft_ret_analysis(tmp, *status);
		ft_putrslt(tmp);
	}
	else
	{
		ualarm(1000000 * 2, 0);
		exit(tmp->fct());
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
		ft_putname(tmp);
		process = fork();
		ft_fork(&status, process, tmp);
		tmp->success == 0 ? cnt++ : 0;
		tmp = tmp->next;
	}
	ft_putnbrtests(*test, cnt);
	return (cnt != ft_testlen(*test) ? -1 : 0);
}
