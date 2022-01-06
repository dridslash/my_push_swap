/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:27:53 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/06 10:47:56 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_b(t_node **head_ref_a, t_node **head_ref_b)
{
	if ((*head_ref_a) != NULL)
	{
		push(head_ref_b, (*head_ref_a)->data);
		(*head_ref_a) = (*head_ref_a)->next;
		write(1, "pb\n", 3);
	}
}
