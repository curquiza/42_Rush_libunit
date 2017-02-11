/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 12:59:11 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/11 15:47:44 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	ft_testadd_back(t_test **alst, t_test *new)
{
	t_test	*tmp;

	if (alst == NULL)
		return ;
	tmp = *alst;
	if (*alst == NULL)
		*alst = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

t_test	*ft_testnew(char *name, int (*f)(void))
{
	t_test		*new;

	if (!name)
		return (NULL);
	if (!(new = (t_test *)malloc(sizeof(*new))))
		return (NULL);
	new->name = ft_strdup(name);
	new->fct = f;
	new->sigret = 0;
	new->succes = 0;
	new->next = NULL;
	return (new);
}

void	ft_load_test(t_test **test, char *name, int (*f)(void))
{
	ft_testadd_back(test, ft_testnew(name, f));
}
