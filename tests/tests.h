/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:56:58 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/11 18:00:50 by curquiza         ###   ########.fr       */
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

#endif
