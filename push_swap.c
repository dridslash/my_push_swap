/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 13:32:12 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/06 14:09:38 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_global(t_node **head_ref_a, t_node **head_ref_b, char **argv)
{
	if (ft_check_input(argv) == 1)
	{
		write(2, "Error\n", 6);
		free_list(head_ref_a);
		free_list(head_ref_b);
		exit(1);
	}
	if (ft_check_dup(argv) == 1)
	{
		write(2, "Error\n", 6);
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
	check_global(&a, &b, argv);
	ft_fill(argv, &a);
	ft_index(a, argc, argv);
	if (ft_check_if_sorted(a) <= 0)
	{
		if (list_size(a) > 10)
			ft_radix(&a, &b);
		else if (list_size(a) <= 10)
			ft_less(&a, &b);
	}
	free_list(&a);
	free_list(&b);
	return (0);
}
