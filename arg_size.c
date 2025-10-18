#include "push_swap.h"

void two_arg(t_list **stack)
{
    sa(stack);
}

void three_arg(t_list **stack)
{
    int a = (*stack)->value;
    int b = (*stack)->next->value;
    int c = (*stack)->next->next->value;

    if (a > b && b < c && a < c)
        sa(stack);
    else if (a > b && b > c && a > c)
    {
        sa(stack);
        rra(stack);
    }
    else if (a > b && b < c && a > c)
        ra(stack);
    else if (a < b && b > c && a < c)
    {
        sa(stack);
        ra(stack);
    }
    else if (a < b && b > c && a > c)
        rra(stack);
}
void four_arg(t_list **stack)
{
     three_arg(&(*stack)->next);
    if ((*stack)->value > (*stack)->next->next->next->value)
        ra(stack);
    else if ((*stack)->value > (*stack)->next->next->value)
    {
        sa(stack);
        ra(stack);
        sa(stack);
        rra(stack);
    }
    else if ((*stack)->value > (*stack)->next->value)
        sa(stack);
}
void five_arg(t_list **stack)
{
    four_arg(&(*stack)->next);
    if ((*stack)->value > (*stack)->next->next->next->next->value)
        ra(stack);
    else if ((*stack)->value > (*stack)->next->next->next->value)
    {
        sa(stack);
        ra(stack);
        sa(stack);
        ra(stack);
        sa(stack);
        rra(stack);
        rra(stack);
    }
    else if ((*stack)->value > (*stack)->next->next->value)
    {
        sa(stack);
        ra(stack);
        sa(stack);
        rra(stack);
    }
    else if ((*stack)->value > (*stack)->next->value)
        sa(stack);
}
void	acnumctl(int ac, t_list **stack_a, t_list **stack_b)
{
	if (ac == 2)
		two_arg(stack_a);
	if (ac == 3)
		three_arg(stack_a);
	if (ac == 4)
		four_arg(stack_a);
	if (ac == 5)
		five_arg(stack_a);
	if (ac > 5)
        radix_sort(stack_a, stack_b);	
}
