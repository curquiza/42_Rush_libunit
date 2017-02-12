/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:56:58 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 16:50:55 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

#include "libunit.h"

int		tests_launcher(void);
int		tests_ok(void);
int		tests_ko(void);
int		tests_segflt(void);
int		tests_buse(void);
int		tests_timeout(void);
int		tests_abort(void);

#endif
