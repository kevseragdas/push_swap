#include "push_swap.h"

static int	find_position(t_list *stack, int val)
{
	int i = 0;
	while (stack)
	{
		if (stack->value == val)
			return (i);
		stack = stack->next;
		i++;
	}
	return (-1);
}

static int	find_min(t_list *stack)
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

static void two_arg(t_list **stack)
{
	sa(stack);
}

static void	three_arg(t_list **a)
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

static void    four_arg(t_list **a, t_list **b)
{
	int min = find_min(*a);
	while ((*a)->value != min)
		ra(a);
	pb(a, b);
	three_arg(a);
	pa(a, b);
}

static void	five_to_ten(t_list **a, t_list **b)
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

void		acnumctl(int ac, t_list **stack_a, t_list **stack_b)
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
