/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagdas <kagdas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:20:51 by kagdas            #+#    #+#             */
/*   Updated: 2025/10/28 17:06:03 by kagdas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_position(t_list *stack, int val)
{
	int		i;

	i = 0;
	while (stack)
	{
		if (stack->value == val)
			return (i);
		stack = stack->next;
		i++;
	}
	return (-1);
}

int	find_min(t_list *stack)
{
	int	min;

	if (!stack)
		return (0);
	min = stack->value;
	while (stack)
	{
		if (stack->value < min)
			min = stack->value;
		stack = stack->next;
	}
	return (min);
}

void	acnumctl(int ac, t_list **stack_a, t_list **stack_b)
{
	if (ac == 2)
		two_arg(stack_a);
	if (ac == 3)
		three_arg(stack_a);
	if (ac == 4)
		four_arg(stack_a, stack_b);
	if (ac >= 5 && ac <= 10)
		five_to_ten(stack_a, stack_b);
	if (ac > 10)
		radix_sort(stack_a, stack_b);
}
