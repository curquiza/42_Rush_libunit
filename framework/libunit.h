/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 11:54:39 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/11 15:39:19 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "libft.h"

/*
** Structures
*/

typedef struct	s_test
{
	char			*name;
	int				sigret;
	int				succes;
	int				(*fct)(void);
	struct s_test	*next;
}				t_test;

/*
** Functions
*/

void			ft_load_test(t_test **test, char *name, int (*f)(void));
int				ft_launch_tests(t_test **test);

#endif
