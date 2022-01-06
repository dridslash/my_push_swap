/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input_checker.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:32:01 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/06 10:31:36 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// static int	check_sign(char **argv)
// {
// 	int	i;

// 	i = 1;
// 	while (argv[i])
// 	{
// 		if (argv[i][0] == '-' || argv[i][0] == '+')
// 		{
// 			if (ft_isdigit(ft_atoi(argv[i])))
// 			{
// 				return (1);
// 			}
// 			else
// 				return (0);
// 		}
// 	}
// 	return (1);
// }

int	ft_check_input(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_isalpha(argv[i])
			|| ((ft_isdigit_imp(argv[i])) == 0)
			|| (ft_is_empty(argv[i]) == 0))
		{
			return (1);
		}	
		else
		{
			ft_atoi(argv[i]);
		}
		i++;
	}
	return (0);
}
