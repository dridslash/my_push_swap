/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_handl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 13:51:44 by marvin            #+#    #+#             */
/*   Updated: 2022/01/01 13:51:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	combo(t_node **head_ref_a, t_node **head_ref_b)
{
	ft_push_b(head_ref_a, head_ref_b);
	ft_swap_a(head_ref_a);
	ft_push_a(head_ref_a, head_ref_b);
}

static void	combo_sec(t_node **head_ref_a)
{
	ft_swap_a(head_ref_a);
	ft_reverse_rotate_a(head_ref_a);
}

void	small_handl(t_node **head_ref_a, t_node **head_ref_b)
{
	t_node	*tmp;

	tmp = (*head_ref_a);
	if (get_min_index(head_ref_a) == 2)
	{
		if (tmp->data > (tmp->next->next)->data)
		{
			ft_rotate_a(head_ref_a);
		}
		else
			ft_swap_a(head_ref_a);
	}
	else if (get_min_index(head_ref_a) == 3)
	{
		if (tmp->data > tmp->next->data)
			combo_sec(head_ref_a);
		else
			ft_reverse_rotate_a(head_ref_a);
	}
	else if (get_min_index(head_ref_a) == 1)
	{
		if (tmp->next->data > tmp->next->next->data)
			combo(head_ref_a, head_ref_b);
	}
}
