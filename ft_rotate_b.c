/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:37:57 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/06 11:09:12 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_b(t_node **head_ref_b)
{
	t_node		*nod1;
	t_node		*last;

	if (list_size(*head_ref_b) > 1)
	{
	nod1 = *head_ref_b;
	last = ft_lstlast(nod1);
	*head_ref_b = nod1->next;
	nod1->next = NULL;
	last->next = nod1;
		write(1, "rb\n", 3);
	}
}
