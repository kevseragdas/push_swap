#include "push_swap.h"

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

void two_arg(t_list **stack)
{
    sa(stack);
}

void	three_arg(t_list **a)
{
	int x = (*a)->value;
	int y = (*a)->next->value;
	int z = (*a)->next->next->value;

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

void    four_arg(t_list **a, t_list **b)
{
	int min = find_min(*a);
	while ((*a)->value != min)
		ra(a);
	pb(a, b);
	three_arg(a);
	pa(a, b);
}

void	five_arg(t_list **a, t_list **b)
{
	int min = find_min(*a);
	while ((*a)->value != min)
		ra(a);
	pb(a, b);
	four_arg(a, b);
	pa(a, b);
}

void	acnumctl(int ac, t_list **stack_a, t_list **stack_b)
{
	if (ac == 2)
		two_arg(stack_a);
	if (ac == 3)
		three_arg(stack_a);
	if (ac == 4)
		four_arg(stack_a, stack_b);
	if (ac == 5)
		five_arg(stack_a, stack_b);
	if (ac > 5)
        radix_sort(stack_a, stack_b);	
}
