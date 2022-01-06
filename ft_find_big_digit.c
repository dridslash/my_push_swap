/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_big_digit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 13:38:51 by marvin            #+#    #+#             */
/*   Updated: 2022/01/01 13:38:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_big_digit(t_node **head_ref_a)
{
	t_node	*tmp;
	int		max;

	tmp = (*head_ref_a);
	max = 0;
	while (tmp != NULL)
	{
		if (tmp->data > max)
		{
			max = tmp->data;
		}
		tmp = tmp->next;
	}
	return (max);
}
