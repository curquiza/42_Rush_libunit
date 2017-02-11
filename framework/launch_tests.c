/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:35:40 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/11 16:59:27 by curquiza         ###   ########.fr       */
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
		process = fork();
		if (process > 0)
		{
			ft_putendl("coco");
			wait(&status);
			tmp->sigret = status;
			if (WIFSIGNALED(status) == 1)
				tmp->succes = -1;
		}
		else
		{
			tmp->succes = tmp->fct();
			exit(0);
		}
		tmp->succes == 0 ? cnt++ : 0;
		tmp = tmp->next;
	}
	return (cnt != ft_testlen(*test) ? -1 : 0);
}
