/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:27:53 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/09 13:41:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_b(t_node **head_ref_a, t_node **head_ref_b)
{
	t_node	*tmp;
	if ((*head_ref_a) != NULL)
	{
		tmp = (*head_ref_a);
		push(head_ref_b, (*head_ref_a)->data);
		(*head_ref_a) = (*head_ref_a)->next;
		free(tmp);
	}
}
