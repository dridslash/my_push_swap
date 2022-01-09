/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bigech_handl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 13:52:52 by marvin            #+#    #+#             */
/*   Updated: 2022/01/01 13:52:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bigech_handl(t_node **head_ref_a, t_node **head_ref_b)
{
	t_node	*tmp;
	int		size;
	int		i;
	int		max;

	tmp = (*head_ref_a);
	max = find_big_digit(head_ref_a);
	size = list_size((*head_ref_a));
	i = 0;
	while (i < size)
	{
		tmp = (*head_ref_a);
		while (get_min_index(&tmp) != 1
			&& get_min(&tmp) < max && get_min(&tmp) < 2)
		{
			ft_rotate_a(head_ref_a);
		}
		tmp = (*head_ref_a);
		if (tmp ->data < max && tmp->data < 2)
		{
			ft_push_b(head_ref_a, head_ref_b);
		}
			i++;
	}
}
