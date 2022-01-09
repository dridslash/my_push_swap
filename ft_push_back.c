/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:16:17 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/09 12:53:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_back(t_node **head_ref, int x)
{
	t_node	*n;
	t_node	*tmp;

	n = (t_node *)malloc(sizeof(t_node));
	if (!n)
	{
		free(n);
		n = NULL;
		return;
	}
	n->data = x;
	if ((*head_ref) == NULL)
	{
		(*head_ref) = n;
		n->next = NULL;
	}
	else
	{
		tmp = ft_lstlast((*head_ref));
		tmp->next = n;
		n ->next = NULL;
	}
}
