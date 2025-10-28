/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_size_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagdas <kagdas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:00:47 by kagdas            #+#    #+#             */
/*   Updated: 2025/10/28 17:02:16 by kagdas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_arg(t_list **stack)
{
	sa(stack);
}

void	three_arg(t_list **a)
{
	int	x;
	int	y;
	int	z;

	x = (*a)->value;
	y = (*a)->next->value;
	z = (*a)->next->next->value;
	if (x > y && y < z && x < z)
		sa(a);
	else if (x > y && y > z)
	{
		sa(a);
		rra(a);
	}
	else if (x > y && y < z && x > z)
		ra(a);
	else if (x < y && y > z && x < z)
	{
		sa(a);
		ra(a);
	}
	else if (x < y && y > z && x > z)
		rra(a);
}

void	four_arg(t_list **a, t_list **b)
{
	int	min;

	min = find_min(*a);
	while ((*a)->value != min)
		ra(a);
	pb(a, b);
	three_arg(a);
	pa(a, b);
}

void	five_to_ten(t_list **a, t_list **b)
{
	int	size;
	int	min;
	int	pos;

	size = stack_size(*a);
	while (size > 3)
	{
		min = find_min(*a);
		pos = find_position(*a, min);
		if (pos <= size / 2)
			while ((*a)->value != min)
				ra(a);
		else
			while ((*a)->value != min)
				rra(a);
		pb(a, b);
		size--;
	}
	three_arg(a);
	while (*b)
		pa(a, b);
}
