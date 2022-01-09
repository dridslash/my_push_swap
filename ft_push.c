/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:15:49 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/09 02:43:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_node **head_ref, int x)
{
	t_node	*n;

	n = (t_node *)malloc(sizeof(t_node));
	n->data = x;
	if ((*head_ref) == NULL)
	{
		(*head_ref) = n;
		n->next = NULL;
	}
	else
	{
		n->next = (*head_ref);
		(*head_ref) = n;
	}
}
