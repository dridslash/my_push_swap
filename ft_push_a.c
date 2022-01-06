/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:24:25 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/05 18:41:10 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_a(t_node **head_ref_a, t_node **head_ref_b)
{
	if ((*head_ref_b) != NULL)
	{
		push(head_ref_a, (*head_ref_b)->data);
		(*head_ref_b) = (*head_ref_b)->next;
		write(1, "pa\n", 3);
	}
}
