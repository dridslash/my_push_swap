/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_imp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:03:31 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/06 14:30:26 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit_imp(char *arg)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (arg[i])
	{
		if ((arg[i] >= 48 && arg[i] <= 57) || arg[i] == '-' || arg[i] == '+')
		{
			if (arg[i] == '-' || arg[i] == '+')
			{
				if (arg[i + 1] >= 48 && arg[i + 1] <= 57)
				{
				}
				else
					return (0);
			}
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}
