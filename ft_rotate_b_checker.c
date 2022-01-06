/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b_checker.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:37:57 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/05 18:34:12 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_b_checker(t_node **head_ref_b)
{
	t_node	*nod1;
	t_node	*last;
	t_node	*tmp;

	nod1 = (*head_ref_b);
	tmp = (*head_ref_b)->next;
	last = ft_lstlast((*head_ref_b));
	nod1->next = NULL;
	last->next = nod1;
	(*head_ref_b) = tmp;
}
