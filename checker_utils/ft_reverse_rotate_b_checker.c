/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_b_checker.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:48:38 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/06 10:56:32 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_node	*get_sec_last_b(t_node **head_ref)
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

void	ft_reverse_rotate_b_checker(t_node **head_ref_b)
{
	t_node	*tmp;
	t_node	*sec_last;
	t_node	*last;

	if (list_size(*head_ref_b) > 1)
	{
	tmp = (*head_ref_b);
	sec_last = get_sec_last_b(head_ref_b);
	last = ft_lstlast((*head_ref_b));
	sec_last->next = NULL;
	last->next = tmp;
	(*head_ref_b) = last;
	}
}
