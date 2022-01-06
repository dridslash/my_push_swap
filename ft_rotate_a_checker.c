/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a_checker.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:12:54 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/05 18:38:54 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a_checker(t_node **head_ref_a)
{
	t_node		*nod1;
	t_node		*last;

	if (list_size(*head_ref_a) > 1)
	{
	nod1 = *head_ref_a;
	last = ft_lstlast(nod1);
	*head_ref_a = nod1->next;
	nod1->next = NULL;
	last->next = nod1;
	}
}
