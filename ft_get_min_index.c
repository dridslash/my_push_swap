/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_min_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 13:39:26 by marvin            #+#    #+#             */
/*   Updated: 2022/01/01 13:39:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min_index(t_node **head_ref)
{
	int		i;
	t_node	*tmp;

		tmp = (*head_ref);
		i = 1;
	while (tmp != NULL)
	{
		if (tmp->data == get_min(head_ref))
		{
			return (i);
		}
		i++;
		tmp = tmp->next;
	}
	return (-1);
}
