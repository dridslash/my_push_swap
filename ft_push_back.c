/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:16:17 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/05 18:40:54 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_back(t_node **head_ref, int x)
{
	t_node	*n;
	t_node	*tmp;

	n = (t_node *)malloc(sizeof(t_node));
	n->data = x;
	if ((*head_ref) == NULL)
	{
		(*head_ref) = n;
		n->next = NULL;
	}
	else
	{
		tmp = (*head_ref);
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = n;
		n ->next = NULL;
	}
}
