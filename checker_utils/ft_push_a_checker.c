/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:24:25 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/09 13:41:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_a(t_node **head_ref_a, t_node **head_ref_b)
{
	t_node	*tmp;
	if ((*head_ref_b) != NULL)
	{
		tmp = (*head_ref_b);
		push(head_ref_a, (*head_ref_b)->data);
		(*head_ref_b) = (*head_ref_b)->next;
		free(tmp);
	}
}
