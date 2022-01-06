/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_a_checker.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:59:40 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/05 18:40:18 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_node	*get_sec_last_a(t_node **head_ref)
{
	t_node	*tmp;
	t_node	*last;
	t_node	*sec_last;

	sec_last = NULL;
	tmp = (*head_ref);
	last = ft_lstlast((*head_ref));
	while (tmp->next != last)
	{
		tmp = tmp->next;
	}
		sec_last = tmp;
	return (sec_last);
}

void	ft_reverse_rotate_a_checker(t_node **head_ref_a)
{
	t_node	*tmp;
	t_node	*sec_last;
	t_node	*last;

	if (list_size(*head_ref_a) > 1)
	{
	tmp = (*head_ref_a);
	sec_last = get_sec_last_a(head_ref_a);
	last = ft_lstlast((*head_ref_a));
	sec_last->next = NULL;
	last->next = tmp;
	(*head_ref_a) = last;
	}
}
