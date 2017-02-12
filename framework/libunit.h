/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 11:54:39 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 17:03:24 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "libft.h"
# include "sys/wait.h"
# include "sys/signal.h"

/*
** Structures
*/

typedef struct	s_test
{
	char			*name;
	int				sigret;
	int				success;
	int				(*fct)(void);
	struct s_test	*next;
}				t_test;

/*
** Functions
*/

int				ft_testlen(t_test *lst);
void			ft_load_test(t_test **test, char *name, int (*f)(void));
int				ft_launch_tests(t_test **test);

/*
** Display
*/

void			ft_putname(t_test *test);
void			ft_putrslt(t_test *test);
void			ft_putnbrtests(t_test *test, int cnt);

#endif
