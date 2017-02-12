/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_emptychar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:30:43 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 15:41:15 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int		emptychar(void)
{
	if (ft_countwords("Hello les cocos !", '\0') == 1)
		return (0);
	else
		return (-1);
}
