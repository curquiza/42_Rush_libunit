/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 10:37:41 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/12 13:31:26 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int		main(void)
{
	ft_putendl_col("***********************************", B_YELLOW, DEF);	
	ft_putendl_col("********** LIBFT - TESTS **********", B_YELLOW, DEF);	
	ft_putendl_col("***********************************", B_YELLOW, DEF);	
	ft_putendl("");
	itoa_launcher();
	ft_putendl("");
	ft_putendl("");
	sleep(1);
	strjoin_launcher();
	return (0);
}
