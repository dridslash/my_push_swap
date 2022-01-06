/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 13:38:14 by marvin            #+#    #+#             */
/*   Updated: 2022/01/01 13:38:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_node **head_ref)
{
	int		min;
	t_node	*tmp;

	tmp = (*head_ref);
	min = (*head_ref)->data;
	while (tmp != NULL)
	{
		if (tmp->data < min)
		{
			min = tmp->data;
		}
		tmp = tmp->next;
	}
	return (min);
}
