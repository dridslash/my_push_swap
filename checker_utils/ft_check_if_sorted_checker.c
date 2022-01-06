/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_sorted_checker.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:29:45 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/05 19:57:23 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_if_sorted(t_node *head)
{
	int		count;
	t_node	*curr;

	count = 0;
	if (list_size(head) == 1)
		return (1);
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			curr = head->next;
			if (head->data < curr->data)
			{
			count++;
			}
			else
			{
			count = 0;
				break ;
			}
		head = head->next;
		}
	}
	return (count);
}
