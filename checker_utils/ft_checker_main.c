/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 19:18:08 by marvin            #+#    #+#             */
/*   Updated: 2021/12/30 19:18:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	check_global(char **argv, t_node **head_ref_a, t_node **head_ref_b)
{
	if (ft_check_input(argv) == 1)
	{
		write(2, "Error\n", 7);
		free_list(head_ref_a);
		free_list(head_ref_b);
		exit(1);
	}
	if (ft_check_dup(argv) == 1)
	{
		write(2, "Error\n", 7);
		free_list(head_ref_a);
		free_list(head_ref_b);
		exit(1);
	}
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	ft_fill(argv, &a);
	check_global(argv, &a, &b);
	if (list_size(a) == 0)
	{
		free_list(&a);
		free_list(&b);
		exit(0);
	}
	ft_index (a, argc, argv);
	ft_checker(&a, &b);
	free_list(&a);
	free_list(&b);
	return (0);
}
