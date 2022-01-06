/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:10:00 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/05 18:19:44 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_b(t_node **head_ref_b)
{
	t_node	*nod1;
	t_node	*nod2;

	if (list_size((*head_ref_b)) > 1)
	{
		nod1 = (*head_ref_b);
		nod2 = NULL;
	nod2 = nod1 ->next;
	nod1->next = nod2 ->next;
	(*head_ref_b) = nod2;
	nod2 ->next = nod1;
		write(1, "sb\n", 4);
	}
}
