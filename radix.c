/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagdas <kagdas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:14:05 by kagdas            #+#    #+#             */
/*   Updated: 2025/10/28 16:14:05 by kagdas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	max_bitn(t_list *stack_a)
{
	int	max;
	int	bit;

	bit = 0;
	if (!stack_a)
		return (0);
	max = stack_a->index;
	while (stack_a)
	{
		if (stack_a->index > max)
			max = stack_a->index;
		stack_a = stack_a->next;
	}
	while ((max >> bit) != 0)
		bit++;
	return (bit);
}

int	stack_size(t_list *stack)
{
	int	size;

	size = 0;
	while (stack != NULL)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}

static	void	find_index(t_list **stack)
{
	t_list	*tmp1;
	t_list	*tmp2;
	int		rank;

	tmp1 = *stack;
	while (tmp1)
	{
		rank = 0;
		tmp2 = *stack;
		while (tmp2)
		{
			if (tmp2->value < tmp1->value)
				rank++;
			tmp2 = tmp2->next;
		}
		tmp1->index = rank;
		tmp1 = tmp1->next;
	}
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	int	max_bit;
	int	temp;
	int	size;
	int	i;
	int	j;

	find_index(stack_a);
	max_bit = max_bitn(*stack_a);
	size = stack_size(*stack_a);
	i = -1;
	while (++i < max_bit)
	{
		j = -1;
		while (++j < size)
		{
			temp = (*stack_a)->index;
			if ((temp >> i & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
		}
		while (*stack_b)
			pa(stack_a, stack_b);
	}
}
