/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:18:12 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/09 12:49:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_node **head_ref)
{
	t_node	*tmp;

	while (*head_ref)
	{
		tmp = (*head_ref);
		*head_ref = (*head_ref)->next;
		free(tmp);
	}
	(*head_ref) = NULL;
}
